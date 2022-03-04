/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_Gg_Pin GPIO_PIN_5
#define LED_Gg_GPIO_Port GPIOA
#define LED_Ff_Pin GPIO_PIN_6
#define LED_Ff_GPIO_Port GPIOA
#define LED_Ee_Pin GPIO_PIN_7
#define LED_Ee_GPIO_Port GPIOA
#define LED_G_Pin GPIO_PIN_0
#define LED_G_GPIO_Port GPIOB
#define LED_F_Pin GPIO_PIN_1
#define LED_F_GPIO_Port GPIOB
#define LED_E_Pin GPIO_PIN_2
#define LED_E_GPIO_Port GPIOB
#define LED_FF_Pin GPIO_PIN_10
#define LED_FF_GPIO_Port GPIOB
#define LED_EE_Pin GPIO_PIN_11
#define LED_EE_GPIO_Port GPIOB
#define LED_DD_Pin GPIO_PIN_12
#define LED_DD_GPIO_Port GPIOB
#define LED_CC_Pin GPIO_PIN_13
#define LED_CC_GPIO_Port GPIOB
#define LED_BB_Pin GPIO_PIN_14
#define LED_BB_GPIO_Port GPIOB
#define LED_AA_Pin GPIO_PIN_15
#define LED_AA_GPIO_Port GPIOB
#define LED_Dd_Pin GPIO_PIN_8
#define LED_Dd_GPIO_Port GPIOA
#define LED_Cc_Pin GPIO_PIN_9
#define LED_Cc_GPIO_Port GPIOA
#define LED_Bb_Pin GPIO_PIN_10
#define LED_Bb_GPIO_Port GPIOA
#define LED_Aa_Pin GPIO_PIN_11
#define LED_Aa_GPIO_Port GPIOA
#define D4_Pin GPIO_PIN_12
#define D4_GPIO_Port GPIOA
#define D3_Pin GPIO_PIN_13
#define D3_GPIO_Port GPIOA
#define D2_Pin GPIO_PIN_14
#define D2_GPIO_Port GPIOA
#define D1_Pin GPIO_PIN_15
#define D1_GPIO_Port GPIOA
#define LED_D_Pin GPIO_PIN_3
#define LED_D_GPIO_Port GPIOB
#define LED_C_Pin GPIO_PIN_4
#define LED_C_GPIO_Port GPIOB
#define LED_B_Pin GPIO_PIN_5
#define LED_B_GPIO_Port GPIOB
#define LED_A_Pin GPIO_PIN_6
#define LED_A_GPIO_Port GPIOB
#define D5_Pin GPIO_PIN_7
#define D5_GPIO_Port GPIOB
#define D6_Pin GPIO_PIN_8
#define D6_GPIO_Port GPIOB
#define LED_GG_Pin GPIO_PIN_9
#define LED_GG_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
