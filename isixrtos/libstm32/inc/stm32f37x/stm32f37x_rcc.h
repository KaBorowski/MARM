/**
  ******************************************************************************
  * @file    stm32f37x_rcc.h
  * @author  MCD Application Team
  * @version V1.0.0
  * @date    20-September-2012
  * @brief   This file contains all the functions prototypes for the RCC 
  *          firmware library.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2012 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32F37X_RCC_H
#define __STM32F37X_RCC_H

#ifdef __cplusplus
 extern "C" {
#endif

#define RCC_HSE_OFF                      ((uint8_t)0x00)
#define RCC_HSE_ON                       ((uint8_t)0x01)
#define RCC_HSE_Bypass                   ((uint8_t)0x05)

 
/** @defgroup RCC_PLL_Clock_Source 
  * @{
  */

#define RCC_PLLSource_HSI_Div2           RCC_CFGR_PLLSRC_HSI_Div2
#define RCC_PLLSource_PREDIV1            RCC_CFGR_PLLSRC_PREDIV1
 


/** @defgroup RCC_PLL_Multiplication_Factor 
  * @{
  */

#define RCC_PLLMul_2                    RCC_CFGR_PLLMULL2
#define RCC_PLLMul_3                    RCC_CFGR_PLLMULL3
#define RCC_PLLMul_4                    RCC_CFGR_PLLMULL4
#define RCC_PLLMul_5                    RCC_CFGR_PLLMULL5
#define RCC_PLLMul_6                    RCC_CFGR_PLLMULL6
#define RCC_PLLMul_7                    RCC_CFGR_PLLMULL7
#define RCC_PLLMul_8                    RCC_CFGR_PLLMULL8
#define RCC_PLLMul_9                    RCC_CFGR_PLLMULL9
#define RCC_PLLMul_10                   RCC_CFGR_PLLMULL10
#define RCC_PLLMul_11                   RCC_CFGR_PLLMULL11
#define RCC_PLLMul_12                   RCC_CFGR_PLLMULL12
#define RCC_PLLMul_13                   RCC_CFGR_PLLMULL13
#define RCC_PLLMul_14                   RCC_CFGR_PLLMULL14
#define RCC_PLLMul_15                   RCC_CFGR_PLLMULL15
#define RCC_PLLMul_16                   RCC_CFGR_PLLMULL16


/** @defgroup RCC_PREDIV1_division_factor
  * @{
  */
#define  RCC_PREDIV1_Div1               RCC_CFGR2_PREDIV1_DIV1
#define  RCC_PREDIV1_Div2               RCC_CFGR2_PREDIV1_DIV2
#define  RCC_PREDIV1_Div3               RCC_CFGR2_PREDIV1_DIV3
#define  RCC_PREDIV1_Div4               RCC_CFGR2_PREDIV1_DIV4
#define  RCC_PREDIV1_Div5               RCC_CFGR2_PREDIV1_DIV5
#define  RCC_PREDIV1_Div6               RCC_CFGR2_PREDIV1_DIV6
#define  RCC_PREDIV1_Div7               RCC_CFGR2_PREDIV1_DIV7
#define  RCC_PREDIV1_Div8               RCC_CFGR2_PREDIV1_DIV8
#define  RCC_PREDIV1_Div9               RCC_CFGR2_PREDIV1_DIV9
#define  RCC_PREDIV1_Div10              RCC_CFGR2_PREDIV1_DIV10
#define  RCC_PREDIV1_Div11              RCC_CFGR2_PREDIV1_DIV11
#define  RCC_PREDIV1_Div12              RCC_CFGR2_PREDIV1_DIV12
#define  RCC_PREDIV1_Div13              RCC_CFGR2_PREDIV1_DIV13
#define  RCC_PREDIV1_Div14              RCC_CFGR2_PREDIV1_DIV14
#define  RCC_PREDIV1_Div15              RCC_CFGR2_PREDIV1_DIV15
#define  RCC_PREDIV1_Div16              RCC_CFGR2_PREDIV1_DIV16

 
/** @defgroup RCC_System_Clock_Source 
  * @{
  */

#define RCC_SYSCLKSource_HSI             RCC_CFGR_SW_HSI
#define RCC_SYSCLKSource_HSE             RCC_CFGR_SW_HSE
#define RCC_SYSCLKSource_PLLCLK          RCC_CFGR_SW_PLL

/**
  * @}
  */

/** @defgroup RCC_AHB_Clock_Source
  * @{
  */

#define RCC_SYSCLK_Div1                  RCC_CFGR_HPRE_DIV1
#define RCC_SYSCLK_Div2                  RCC_CFGR_HPRE_DIV2
#define RCC_SYSCLK_Div4                  RCC_CFGR_HPRE_DIV4
#define RCC_SYSCLK_Div8                  RCC_CFGR_HPRE_DIV8
#define RCC_SYSCLK_Div16                 RCC_CFGR_HPRE_DIV16
#define RCC_SYSCLK_Div64                 RCC_CFGR_HPRE_DIV64
#define RCC_SYSCLK_Div128                RCC_CFGR_HPRE_DIV128
#define RCC_SYSCLK_Div256                RCC_CFGR_HPRE_DIV256
#define RCC_SYSCLK_Div512                RCC_CFGR_HPRE_DIV512

/** @defgroup RCC_APB1_APB2_Clock_Source
  * @{
  */

#define RCC_HCLK_Div1                    RCC_CFGR_PPRE1_DIV1
#define RCC_HCLK_Div2                    RCC_CFGR_PPRE1_DIV2
#define RCC_HCLK_Div4                    RCC_CFGR_PPRE1_DIV4
#define RCC_HCLK_Div8                    RCC_CFGR_PPRE1_DIV8
#define RCC_HCLK_Div16                   RCC_CFGR_PPRE1_DIV16


/** @defgroup RCC_ADC_clock_source 
  * @{
  */

#define RCC_PCLK2_Div2                   ((uint32_t)0x00000000)
#define RCC_PCLK2_Div4                   ((uint32_t)0x00004000)
#define RCC_PCLK2_Div6                   ((uint32_t)0x00008000)
#define RCC_PCLK2_Div8                   ((uint32_t)0x0000C000)


#define RCC_SDADCCLK_SYSCLK_Div2                   ((uint32_t)0x80000000)
#define RCC_SDADCCLK_SYSCLK_Div4                   ((uint32_t)0x88000000)
#define RCC_SDADCCLK_SYSCLK_Div6                   ((uint32_t)0x90000000)
#define RCC_SDADCCLK_SYSCLK_Div8                   ((uint32_t)0x98000000)
#define RCC_SDADCCLK_SYSCLK_Div10                  ((uint32_t)0xA0000000)
#define RCC_SDADCCLK_SYSCLK_Div12                  ((uint32_t)0xA8000000)
#define RCC_SDADCCLK_SYSCLK_Div14                  ((uint32_t)0xB0000000)
#define RCC_SDADCCLK_SYSCLK_Div16                  ((uint32_t)0xB8000000)
#define RCC_SDADCCLK_SYSCLK_Div20                  ((uint32_t)0xC0000000)
#define RCC_SDADCCLK_SYSCLK_Div24                  ((uint32_t)0xC8000000)
#define RCC_SDADCCLK_SYSCLK_Div28                  ((uint32_t)0xD0000000)
#define RCC_SDADCCLK_SYSCLK_Div32                  ((uint32_t)0xD8000000)
#define RCC_SDADCCLK_SYSCLK_Div36                  ((uint32_t)0xE0000000)
#define RCC_SDADCCLK_SYSCLK_Div40                  ((uint32_t)0xE8000000)
#define RCC_SDADCCLK_SYSCLK_Div44                  ((uint32_t)0xF0000000)
#define RCC_SDADCCLK_SYSCLK_Div48                  ((uint32_t)0xF8000000)

#define IS_RCC_SDADCCLK(SDADCCLK) (((SDADCCLK) == RCC_SDADCCLK_SYSCLK_Div2) || ((SDADCCLK) == RCC_SDADCCLK_SYSCLK_Div4) || \
                                   ((SDADCCLK) == RCC_SDADCCLK_SYSCLK_Div6) || ((SDADCCLK) == RCC_SDADCCLK_SYSCLK_Div8) || \
                                   ((SDADCCLK) == RCC_SDADCCLK_SYSCLK_Div10) || ((SDADCCLK) == RCC_SDADCCLK_SYSCLK_Div12) || \
                                   ((SDADCCLK) == RCC_SDADCCLK_SYSCLK_Div14) || ((SDADCCLK) == RCC_SDADCCLK_SYSCLK_Div16) || \
                                   ((SDADCCLK) == RCC_SDADCCLK_SYSCLK_Div20) || ((SDADCCLK) == RCC_SDADCCLK_SYSCLK_Div24) || \
                                   ((SDADCCLK) == RCC_SDADCCLK_SYSCLK_Div28) || ((SDADCCLK) == RCC_SDADCCLK_SYSCLK_Div32) || \
                                   ((SDADCCLK) == RCC_SDADCCLK_SYSCLK_Div36) || ((SDADCCLK) == RCC_SDADCCLK_SYSCLK_Div40) || \
                                   ((SDADCCLK) == RCC_SDADCCLK_SYSCLK_Div44) || ((SDADCCLK) == RCC_SDADCCLK_SYSCLK_Div48))
/**
  * @}
  */

/** @defgroup RCC_CEC_clock_source 
  * @{
  */

#define RCC_CECCLK_HSI_Div244            ((uint32_t)0x00000000)
#define RCC_CECCLK_LSE                   RCC_CFGR3_CECSW

/** @defgroup RCC_I2C_clock_source 
  * @{
  */

#define RCC_I2C1CLK_HSI                   ((uint32_t)0x00000000)
#define RCC_I2C1CLK_SYSCLK                RCC_CFGR3_I2C1SW

#define RCC_I2C2CLK_HSI                   ((uint32_t)0x10000000)
#define RCC_I2C2CLK_SYSCLK                ((uint32_t)0x10000020)



/** @defgroup RCC_USART_clock_source 
  * @{
  */

#define RCC_USART1CLK_PCLK                  ((uint32_t)0x10000000)
#define RCC_USART1CLK_SYSCLK                ((uint32_t)0x10000001)
#define RCC_USART1CLK_LSE                   ((uint32_t)0x10000002)
#define RCC_USART1CLK_HSI                   ((uint32_t)0x10000003)

#define RCC_USART2CLK_PCLK                  ((uint32_t)0x20000000)
#define RCC_USART2CLK_SYSCLK                ((uint32_t)0x20010000)
#define RCC_USART2CLK_LSE                   ((uint32_t)0x20020000)
#define RCC_USART2CLK_HSI                   ((uint32_t)0x20030000)

#define RCC_USART3CLK_PCLK                  ((uint32_t)0x30000000)
#define RCC_USART3CLK_SYSCLK                ((uint32_t)0x30040000)
#define RCC_USART3CLK_LSE                   ((uint32_t)0x30080000)
#define RCC_USART3CLK_HSI                   ((uint32_t)0x300C0000)



/**
  * @}
  */
       
/** @defgroup RCC_Interrupt_Source 
  * @{
  */

#define RCC_IT_LSIRDY                    ((uint8_t)0x01)
#define RCC_IT_LSERDY                    ((uint8_t)0x02)
#define RCC_IT_HSIRDY                    ((uint8_t)0x04)
#define RCC_IT_HSERDY                    ((uint8_t)0x08)
#define RCC_IT_PLLRDY                    ((uint8_t)0x10)
#define RCC_IT_CSS                       ((uint8_t)0x80)


#define IS_RCC_CLEAR_IT(IT) ((((IT) & (uint8_t)0x40) == 0x00) && ((IT) != 0x00))

/**
  * @}
  */
  
/** @defgroup RCC_LSE_Configuration 
  * @{
  */

#define RCC_LSE_OFF                      ((uint32_t)0x00000000)
#define RCC_LSE_ON                       RCC_BDCR_LSEON
#define RCC_LSE_Bypass                   ((uint32_t)(RCC_BDCR_LSEON | RCC_BDCR_LSEBYP))


/** @defgroup RCC_RTC_Clock_Source
  * @{
  */

#define RCC_RTCCLKSource_LSE             RCC_BDCR_RTCSEL_LSE
#define RCC_RTCCLKSource_LSI             RCC_BDCR_RTCSEL_LSI
#define RCC_RTCCLKSource_HSE_Div32       RCC_BDCR_RTCSEL_HSE


/**
  * @}
  */

/** @defgroup RCC_LSE_Drive_Configuration 
  * @{
  */

#define RCC_LSEDrive_Low                 ((uint32_t)0x00000000)
#define RCC_LSEDrive_MediumLow           RCC_BDCR_LSEDRV_0
#define RCC_LSEDrive_MediumHigh          RCC_BDCR_LSEDRV_1
#define RCC_LSEDrive_High                RCC_BDCR_LSEDRV

/**
  * @}
  */
  
/** @defgroup RCC_AHB_Peripherals 
  * @{
  */

#define RCC_AHBPeriph_GPIOA               RCC_AHBENR_GPIOAEN
#define RCC_AHBPeriph_GPIOB               RCC_AHBENR_GPIOBEN
#define RCC_AHBPeriph_GPIOC               RCC_AHBENR_GPIOCEN
#define RCC_AHBPeriph_GPIOD               RCC_AHBENR_GPIODEN
#define RCC_AHBPeriph_GPIOE               RCC_AHBENR_GPIOEEN
#define RCC_AHBPeriph_GPIOF               RCC_AHBENR_GPIOFEN
#define RCC_AHBPeriph_TS                  RCC_AHBENR_TSEN
#define RCC_AHBPeriph_CRC                 RCC_AHBENR_CRCEN
#define RCC_AHBPeriph_FLITF               RCC_AHBENR_FLITFEN
#define RCC_AHBPeriph_SRAM                RCC_AHBENR_SRAMEN
#define RCC_AHBPeriph_DMA2                RCC_AHBENR_DMA2EN
#define RCC_AHBPeriph_DMA1                RCC_AHBENR_DMA1EN



/** @defgroup RCC_APB2_Peripherals 
  * @{
  */

#define RCC_APB2Periph_SYSCFG            RCC_APB2ENR_SYSCFGEN
#define RCC_APB2Periph_ADC1              RCC_APB2ENR_ADC1EN
#define RCC_APB2Periph_SPI1              RCC_APB2ENR_SPI1EN
#define RCC_APB2Periph_USART1            RCC_APB2ENR_USART1EN
#define RCC_APB2Periph_TIM15             RCC_APB2ENR_TIM15EN
#define RCC_APB2Periph_TIM16             RCC_APB2ENR_TIM16EN
#define RCC_APB2Periph_TIM17             RCC_APB2ENR_TIM17EN
#define RCC_APB2Periph_TIM19             RCC_APB2ENR_TIM19EN
#define RCC_APB2Periph_SDADC1            RCC_APB2ENR_SDADC1EN
#define RCC_APB2Periph_SDADC2            RCC_APB2ENR_SDADC2EN
#define RCC_APB2Periph_SDADC3            RCC_APB2ENR_SDADC3EN



/** @defgroup RCC_APB1_Peripherals 
  * @{
  */
#define RCC_APB1Periph_TIM2              RCC_APB1ENR_TIM2EN
#define RCC_APB1Periph_TIM3              RCC_APB1ENR_TIM3EN
#define RCC_APB1Periph_TIM4              RCC_APB1ENR_TIM4EN
#define RCC_APB1Periph_TIM5              RCC_APB1ENR_TIM5EN
#define RCC_APB1Periph_TIM6              RCC_APB1ENR_TIM6EN
#define RCC_APB1Periph_TIM7              RCC_APB1ENR_TIM7EN
#define RCC_APB1Periph_TIM12             RCC_APB1ENR_TIM12EN
#define RCC_APB1Periph_TIM13             RCC_APB1ENR_TIM13EN
#define RCC_APB1Periph_TIM14             RCC_APB1ENR_TIM14EN
#define RCC_APB1Periph_TIM18             RCC_APB1ENR_TIM18EN
#define RCC_APB1Periph_WWDG              RCC_APB1ENR_WWDGEN
#define RCC_APB1Periph_SPI2              RCC_APB1ENR_SPI2EN
#define RCC_APB1Periph_SPI3              RCC_APB1ENR_SPI3EN
#define RCC_APB1Periph_USART2            RCC_APB1ENR_USART2EN
#define RCC_APB1Periph_USART3            RCC_APB1ENR_USART3EN
#define RCC_APB1Periph_I2C1              RCC_APB1ENR_I2C1EN
#define RCC_APB1Periph_I2C2              RCC_APB1ENR_I2C2EN
#define RCC_APB1Periph_USB               RCC_APB1ENR_USBEN
#define RCC_APB1Periph_CAN1              RCC_APB1ENR_CAN1EN
#define RCC_APB1Periph_DAC2              RCC_APB1ENR_DAC2EN
#define RCC_APB1Periph_PWR               RCC_APB1ENR_PWREN
#define RCC_APB1Periph_DAC1              RCC_APB1ENR_DAC1EN
#define RCC_APB1Periph_CEC               RCC_APB1ENR_CECEN



/** @defgroup RCC_MCO_Clock_Source
  * @{
  */

#define RCC_MCOSource_NoClock            ((uint8_t)0x00)
#define RCC_MCOSource_LSI                ((uint8_t)0x02)
#define RCC_MCOSource_LSE                ((uint8_t)0x03)
#define RCC_MCOSource_SYSCLK             ((uint8_t)0x04)
#define RCC_MCOSource_HSI                ((uint8_t)0x05)
#define RCC_MCOSource_HSE                ((uint8_t)0x06)
#define RCC_MCOSource_PLLCLK_Div2        ((uint8_t)0x07)



/** @defgroup RCC_USB_Device_clock_source 
  * @{
  */

 #define RCC_USBCLKSource_PLLCLK_1Div5   ((uint8_t)0x00)
 #define RCC_USBCLKSource_PLLCLK_Div1    ((uint8_t)0x01)


/** @defgroup RCC_Flag 
  * @{
  */
#define RCC_FLAG_HSIRDY                  ((uint8_t)0x01)
#define RCC_FLAG_HSERDY                  ((uint8_t)0x11)
#define RCC_FLAG_PLLRDY                  ((uint8_t)0x19)
#define RCC_FLAG_LSERDY                  ((uint8_t)0x21)
#define RCC_FLAG_LSIRDY                  ((uint8_t)0x41)
#define RCC_FLAG_V18PWRRSTF              ((uint8_t)0x57)
#define RCC_FLAG_OBLRST                  ((uint8_t)0x59)
#define RCC_FLAG_PINRST                  ((uint8_t)0x5A)
#define RCC_FLAG_PORRST                  ((uint8_t)0x5B)
#define RCC_FLAG_SFTRST                  ((uint8_t)0x5C)
#define RCC_FLAG_IWDGRST                 ((uint8_t)0x5D)
#define RCC_FLAG_WWDGRST                 ((uint8_t)0x5E)
#define RCC_FLAG_LPWRRST                 ((uint8_t)0x5F)





#ifdef __cplusplus
}
#endif

#endif /* __STM32F37X_RCC_H */

