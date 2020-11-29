#include <config/conf.h>
#include <foundation/sys/dbglog.h>
#include <periph/drivers/serial/uart_early.hpp>
#include <periph/gpio/gpio.hpp>
#include <isix.h>
/* USER CODE INCLUDES BEGIN */
#include <src/array_for_sort.hpp>
#include <string.h>
#include <stdio.h>
/* USER CODE INCLUDES END */

/* USER CODE FUNCTIONS BEGIN */
int *selection_sort(int *data_to_sort = NULL, int size = 0)
{
    int min_index = 0;
    int tmp = 0;
    for (int i = 0; i < size; ++i)
    {
        min_index = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (data_to_sort[min_index] > data_to_sort[j])
            {
                min_index = j;
            }
        }
        std::swap(data_to_sort[min_index], data_to_sort[i]);
    }
    return data_to_sort;
}

/* USER CODE FUNCTIONS END */

namespace
{
    constexpr auto led_0 = periph::gpio::num::PD13;
}

namespace app
{
    void test_thread(void *)
    {
        const int sort_size = 4096;
        const int measurement_amount = 20;
        int *data;
        int sort_time[measurement_amount];
        int tickstart = 0;
        data = (int *)malloc(sizeof(int) * sort_size);
        while (true)
        {
            dbprintf("Starting measurements");
            for (int i = 0; i < measurement_amount; ++i)
            {
                memcpy(data, array_for_sort, sizeof(int) * sort_size);
                tickstart = isix::get_ujiffies();
                selection_sort(data, sort_size);
                sort_time[i] = isix::get_ujiffies() - tickstart;
                dbprintf("No: %i = %i", i+1, sort_time[i]);
                periph::gpio::set(led_0, i % 2);
            }
            isix::wait_ms(10000);
        }
        free(data);
    }
} // namespace app

auto main() -> int
{
    static isix::semaphore m_ulock_sem{1, 1};
    isix::wait_ms(500);
    dblog_init_locked(
        [](int ch, void *) {
            return periph::drivers::uart_early::putc(ch);
        },
        nullptr,
        []() {
            m_ulock_sem.wait(ISIX_TIME_INFINITE);
        },
        []() {
            m_ulock_sem.signal();
        },
        periph::drivers::uart_early::open,
        "serial0", 115200);
    // Configure PD13 pin LED as an output
    periph::gpio::setup(led_0,
                        periph::gpio::mode::out{
                            periph::gpio::outtype::pushpull,
                            periph::gpio::speed::low});
    isix::task_create(app::test_thread, nullptr, 1536, isix::get_min_priority());
    dbprintf("<<<< Hello STM32F411E-DISCO board >>>>");
    isix::start_scheduler();
    return 0;
}
