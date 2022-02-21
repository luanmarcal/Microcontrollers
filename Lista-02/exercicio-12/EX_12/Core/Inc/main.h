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
#define LED1_Pin GPIO_PIN_1
#define LED1_GPIO_Port GPIOA
#define LED2_Pin GPIO_PIN_2
#define LED2_GPIO_Port GPIOA
#define LED3_Pin GPIO_PIN_3
#define LED3_GPIO_Port GPIOA
#define LED4_Pin GPIO_PIN_4
#define LED4_GPIO_Port GPIOA
#define LED5_Pin GPIO_PIN_5
#define LED5_GPIO_Port GPIOA
#define LED6_Pin GPIO_PIN_6
#define LED6_GPIO_Port GPIOA
#define LED7_Pin GPIO_PIN_7
#define LED7_GPIO_Port GPIOA
#define PB1_Pin GPIO_PIN_1
#define PB1_GPIO_Port GPIOB
#define PB2_Pin GPIO_PIN_2
#define PB2_GPIO_Port GPIOB
#define PB10_Pin GPIO_PIN_10
#define PB10_GPIO_Port GPIOB
#define PB11_Pin GPIO_PIN_11
#define PB11_GPIO_Port GPIOB
#define PB12_Pin GPIO_PIN_12
#define PB12_GPIO_Port GPIOB
#define PB13_Pin GPIO_PIN_13
#define PB13_GPIO_Port GPIOB
#define PB14_Pin GPIO_PIN_14
#define PB14_GPIO_Port GPIOB
#define PB15_Pin GPIO_PIN_15
#define PB15_GPIO_Port GPIOB
#define PB3_Pin GPIO_PIN_3
#define PB3_GPIO_Port GPIOB
#define PB4_Pin GPIO_PIN_4
#define PB4_GPIO_Port GPIOB
#define PB5_Pin GPIO_PIN_5
#define PB5_GPIO_Port GPIOB
#define PB6_Pin GPIO_PIN_6
#define PB6_GPIO_Port GPIOB
#define PB7_Pin GPIO_PIN_7
#define PB7_GPIO_Port GPIOB
#define PB8_Pin GPIO_PIN_8
#define PB8_GPIO_Port GPIOB
#define PB9_Pin GPIO_PIN_9
#define PB9_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
