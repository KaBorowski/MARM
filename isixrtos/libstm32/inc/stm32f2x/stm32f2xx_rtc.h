/**
  ******************************************************************************
  * @file    stm32f2xx_rtc.h
  * @author  MCD Application Team
  * @version V1.1.2
  * @date    05-March-2012 
  * @brief   This file contains all the functions prototypes for the RTC firmware
  *          library.
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
#ifndef __STM32F2xx_RTC_H
#define __STM32F2xx_RTC_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f2xx.h"

/** @addtogroup STM32F2xx_StdPeriph_Driver
  * @{
  */




/** @defgroup RTC_Hour_Formats 
  * @{
  */ 
#define RTC_HourFormat_24              ((uint32_t)0x00000000)
#define RTC_HourFormat_12              ((uint32_t)0x00000040)

/**
  * @}
  */ 


/**
  * @}
  */ 

/** @defgroup RTC_AM_PM_Definitions 
  * @{
  */ 
#define RTC_H12_AM                     ((uint8_t)0x00)
#define RTC_H12_PM                     ((uint8_t)0x40)


/** @defgroup RTC_Month_Date_Definitions 
  * @{
  */ 

/* Coded in BCD format */
#define RTC_Month_January              ((uint8_t)0x01)
#define RTC_Month_February             ((uint8_t)0x02)
#define RTC_Month_March                ((uint8_t)0x03)
#define RTC_Month_April                ((uint8_t)0x04)
#define RTC_Month_May                  ((uint8_t)0x05)
#define RTC_Month_June                 ((uint8_t)0x06)
#define RTC_Month_July                 ((uint8_t)0x07)
#define RTC_Month_August               ((uint8_t)0x08)
#define RTC_Month_September            ((uint8_t)0x09)
#define RTC_Month_October              ((uint8_t)0x10)
#define RTC_Month_November             ((uint8_t)0x11)
#define RTC_Month_December             ((uint8_t)0x12)


/**
  * @}
  */ 

/** @defgroup RTC_WeekDay_Definitions 
  * @{
  */ 
  
#define	RTC_Weekday_Monday             ((uint8_t)0x01)
#define	RTC_Weekday_Tuesday            ((uint8_t)0x02)
#define	RTC_Weekday_Wednesday          ((uint8_t)0x03)
#define	RTC_Weekday_Thursday           ((uint8_t)0x04)
#define	RTC_Weekday_Friday             ((uint8_t)0x05)
#define	RTC_Weekday_Saturday           ((uint8_t)0x06)
#define	RTC_Weekday_Sunday             ((uint8_t)0x07)




/** @defgroup RTC_AlarmDateWeekDay_Definitions 
  * @{
  */ 
#define RTC_AlarmDateWeekDaySel_Date      ((uint32_t)0x00000000)
#define RTC_AlarmDateWeekDaySel_WeekDay   ((uint32_t)0x40000000)


/** @defgroup RTC_AlarmMask_Definitions 
  * @{
  */ 
#define RTC_AlarmMask_None                ((uint32_t)0x00000000)
#define RTC_AlarmMask_DateWeekDay         ((uint32_t)0x80000000)
#define RTC_AlarmMask_Hours               ((uint32_t)0x00800000)
#define RTC_AlarmMask_Minutes             ((uint32_t)0x00008000)
#define RTC_AlarmMask_Seconds             ((uint32_t)0x00000080)
#define RTC_AlarmMask_All                 ((uint32_t)0x80808080)


/**
  * @}
  */ 

/** @defgroup RTC_Alarms_Definitions 
  * @{
  */ 
#define RTC_Alarm_A                       ((uint32_t)0x00000100)
#define RTC_Alarm_B                       ((uint32_t)0x00000200)


/**
  * @}
  */ 

/** @defgroup RTC_Wakeup_Timer_Definitions 
  * @{
  */ 
#define RTC_WakeUpClock_RTCCLK_Div16        ((uint32_t)0x00000000)
#define RTC_WakeUpClock_RTCCLK_Div8         ((uint32_t)0x00000001)
#define RTC_WakeUpClock_RTCCLK_Div4         ((uint32_t)0x00000002)
#define RTC_WakeUpClock_RTCCLK_Div2         ((uint32_t)0x00000003)
#define RTC_WakeUpClock_CK_SPRE_16bits      ((uint32_t)0x00000004)
#define RTC_WakeUpClock_CK_SPRE_17bits      ((uint32_t)0x00000006)

/**
  * @}
  */ 

/** @defgroup RTC_Time_Stamp_Edges_definitions 
  * @{
  */ 
#define RTC_TimeStampEdge_Rising          ((uint32_t)0x00000000)
#define RTC_TimeStampEdge_Falling         ((uint32_t)0x00000008)

/**
  * @}
  */ 

/** @defgroup RTC_Output_selection_Definitions 
  * @{
  */ 
#define RTC_Output_Disable             ((uint32_t)0x00000000)
#define RTC_Output_AlarmA              ((uint32_t)0x00200000)
#define RTC_Output_AlarmB              ((uint32_t)0x00400000)
#define RTC_Output_WakeUp              ((uint32_t)0x00600000)


/**
  * @}
  */ 

/** @defgroup RTC_Output_Polarity_Definitions 
  * @{
  */ 
#define RTC_OutputPolarity_High           ((uint32_t)0x00000000)
#define RTC_OutputPolarity_Low            ((uint32_t)0x00100000)

/**
  * @}
  */ 


/** @defgroup RTC_Digital_Calibration_Definitions 
  * @{
  */ 
#define RTC_CalibSign_Positive            ((uint32_t)0x00000000) 
#define RTC_CalibSign_Negative            ((uint32_t)0x00000080)


/**
  * @}
  */ 


/** @defgroup RTC_DayLightSaving_Definitions 
  * @{
  */ 
#define RTC_DayLightSaving_SUB1H   ((uint32_t)0x00020000)
#define RTC_DayLightSaving_ADD1H   ((uint32_t)0x00010000)


#define RTC_StoreOperation_Reset        ((uint32_t)0x00000000)
#define RTC_StoreOperation_Set          ((uint32_t)0x00040000)

/**
  * @}
  */ 

/** @defgroup RTC_Tamper_Trigger_Definitions 
  * @{
  */ 
#define RTC_TamperTrigger_RisingEdge            ((uint32_t)0x00000000)
#define RTC_TamperTrigger_FallingEdge           ((uint32_t)0x00000001)


/**
  * @}
  */ 

/** @defgroup RTC_Tamper_Pins_Definitions 
  * @{
  */ 
#define RTC_Tamper_1                    RTC_TAFCR_TAMP1E


/**
  * @}
  */

/** @defgroup RTC_Tamper_Pin_Selection 
  * @{
  */ 
#define RTC_TamperPin_PC13                 ((uint32_t)0x00000000)
#define RTC_TamperPin_PI8                  ((uint32_t)0x00010000)

/**
  * @}
  */ 

/** @defgroup RTC_TimeStamp_Pin_Selection 
  * @{
  */ 
#define RTC_TimeStampPin_PC13              ((uint32_t)0x00000000)
#define RTC_TimeStampPin_PI8               ((uint32_t)0x00020000)

/**
  * @}
  */ 

/** @defgroup RTC_Output_Type_ALARM_OUT 
  * @{
  */ 
#define RTC_OutputType_OpenDrain           ((uint32_t)0x00000000)
#define RTC_OutputType_PushPull            ((uint32_t)0x00040000)


/**
  * @}
  */ 

/** @defgroup RTC_Backup_Registers_Definitions 
  * @{
  */

#define RTC_BKP_DR0                       ((uint32_t)0x00000000)
#define RTC_BKP_DR1                       ((uint32_t)0x00000001)
#define RTC_BKP_DR2                       ((uint32_t)0x00000002)
#define RTC_BKP_DR3                       ((uint32_t)0x00000003)
#define RTC_BKP_DR4                       ((uint32_t)0x00000004)
#define RTC_BKP_DR5                       ((uint32_t)0x00000005)
#define RTC_BKP_DR6                       ((uint32_t)0x00000006)
#define RTC_BKP_DR7                       ((uint32_t)0x00000007)
#define RTC_BKP_DR8                       ((uint32_t)0x00000008)
#define RTC_BKP_DR9                       ((uint32_t)0x00000009)
#define RTC_BKP_DR10                      ((uint32_t)0x0000000A)
#define RTC_BKP_DR11                      ((uint32_t)0x0000000B)
#define RTC_BKP_DR12                      ((uint32_t)0x0000000C)
#define RTC_BKP_DR13                      ((uint32_t)0x0000000D)
#define RTC_BKP_DR14                      ((uint32_t)0x0000000E)
#define RTC_BKP_DR15                      ((uint32_t)0x0000000F)
#define RTC_BKP_DR16                      ((uint32_t)0x00000010)
#define RTC_BKP_DR17                      ((uint32_t)0x00000011)
#define RTC_BKP_DR18                      ((uint32_t)0x00000012)
#define RTC_BKP_DR19                      ((uint32_t)0x00000013)

/**
  * @}
  */ 

/** @defgroup RTC_Input_parameter_format_definitions 
  * @{
  */ 
#define RTC_Format_BIN                    ((uint32_t)0x000000000)
#define RTC_Format_BCD                    ((uint32_t)0x000000001)


/**
  * @}
  */ 

/** @defgroup RTC_Flags_Definitions 
  * @{
  */ 
#define RTC_FLAG_TAMP1F                   ((uint32_t)0x00002000)
#define RTC_FLAG_TSOVF                    ((uint32_t)0x00001000)
#define RTC_FLAG_TSF                      ((uint32_t)0x00000800)
#define RTC_FLAG_WUTF                     ((uint32_t)0x00000400)
#define RTC_FLAG_ALRBF                    ((uint32_t)0x00000200)
#define RTC_FLAG_ALRAF                    ((uint32_t)0x00000100)
#define RTC_FLAG_INITF                    ((uint32_t)0x00000040)
#define RTC_FLAG_RSF                      ((uint32_t)0x00000020)
#define RTC_FLAG_INITS                    ((uint32_t)0x00000010)
#define RTC_FLAG_WUTWF                    ((uint32_t)0x00000004)
#define RTC_FLAG_ALRBWF                   ((uint32_t)0x00000002)
#define RTC_FLAG_ALRAWF                   ((uint32_t)0x00000001)

/**
  * @}
  */ 

/** @defgroup RTC_Interrupts_Definitions 
  * @{
  */ 
#define RTC_IT_TS                         ((uint32_t)0x00008000)
#define RTC_IT_WUT                        ((uint32_t)0x00004000)
#define RTC_IT_ALRB                       ((uint32_t)0x00002000)
#define RTC_IT_ALRA                       ((uint32_t)0x00001000)
#define RTC_IT_TAMP                       ((uint32_t)0x00000004) /* Used only to Enable the Tamper Interrupt */
#define RTC_IT_TAMP1                      ((uint32_t)0x00020000)


/**
  * @}
  */ 

/** @defgroup RTC_Legacy 
  * @{
  */ 
#define RTC_DigitalCalibConfig  RTC_CoarseCalibConfig
#define RTC_DigitalCalibCmd     RTC_CoarseCalibCmd


#ifdef __cplusplus
}
#endif

#endif /*__STM32F2xx_RTC_H */

/**
  * @}
  */ 

/**
  * @}
  */ 

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
