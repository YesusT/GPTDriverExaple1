/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : 
*   Dependencies         : none
*
*   Autosar Version      : 4.7.0
*   Autosar Revision     : ASR_REL_4_7_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 2.0.0
*   Build Version        : S32K1_RTD_2_0_0_QLP1_D2408_ASR_REL_4_7_REV_0000_20240809
*
*   Copyright 2020-2024 NXP Semiconductors
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/
/**
*   @file       Ram_Ip_PBcfg.c
*   @version    2.0.0
*
*   @brief   AUTOSAR Mcu - Post-Build(PB) configuration file code template.
*   @details Code template for Post-Build(PB) configuration file generation.
*
*   @addtogroup RAM_DRIVER_CONFIGURATION Ram Ip Driver
*   @{
*/


#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "StandardTypes.h"
#include "Ram_Ip_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define RAM_IP_PBCFG_VENDOR_ID_C                         43
#define RAM_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C          4
#define RAM_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C          7
#define RAM_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C       0
#define RAM_IP_PBCFG_SW_MAJOR_VERSION_C                  2
#define RAM_IP_PBCFG_SW_MINOR_VERSION_C                  0
#define RAM_IP_PBCFG_SW_PATCH_VERSION_C                  0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Ram_Ip_PBcfg.c file and Ram_Ip_Cfg.h file are of the same vendor */
#if (RAM_IP_PBCFG_VENDOR_ID_C != RAM_IP_CFG_VENDOR_ID)
    #error "Ram_Ip_PBcfg.c and Ram_Ip_Cfg.h have different vendor ids"
#endif

/* Check if Ram_Ip_PBcfg.c file and Ram_Ip_Cfg.h file are of the same Autosar version */
#if ((RAM_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != RAM_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (RAM_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != RAM_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (RAM_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C != RAM_IP_CFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Ram_Ip_PBcfg.c and Ram_Ip_Cfg.h are different"
#endif

/* Check if Ram_Ip_PBcfg.c file and Ram_Ip_Cfg.h file are of the same Software version */
#if ((RAM_IP_PBCFG_SW_MAJOR_VERSION_C != RAM_IP_CFG_SW_MAJOR_VERSION) || \
     (RAM_IP_PBCFG_SW_MINOR_VERSION_C != RAM_IP_CFG_SW_MINOR_VERSION) || \
     (RAM_IP_PBCFG_SW_PATCH_VERSION_C != RAM_IP_CFG_SW_PATCH_VERSION) \
    )
  #error "Software Version Numbers of Ram_Ip_PBcfg.c and Ram_Ip_Cfg.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if Ram_Ip_PBcfg.c file and StandardTypes.h file are of the same Autosar version */
#if ((RAM_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C    != STD_AR_RELEASE_MAJOR_VERSION) || \
     (RAM_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C    != STD_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Ram_Ip_PBcfg.c and StandardTypes.h are different"
#endif
#endif
/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                        LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/


#define MCU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcu_MemMap.h"






#define MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcu_MemMap.h"

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */
