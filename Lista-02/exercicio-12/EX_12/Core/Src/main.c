/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include <stdint.h>
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
uint32_t bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8, bit9, bit10, bit11, bit12, bit13, bit14, bit15, result = 0;
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */

  while (1)
  {

	bit1 = HAL_GPIO_ReadPin(PB15_GPIO_Port, PB15_Pin);
	bit2 = HAL_GPIO_ReadPin(PB1_GPIO_Port, PB1_Pin);
	bit3 = HAL_GPIO_ReadPin(PB2_GPIO_Port, PB2_Pin);
	bit4 = HAL_GPIO_ReadPin(PB3_GPIO_Port, PB3_Pin);
	bit5 = HAL_GPIO_ReadPin(PB4_GPIO_Port, PB4_Pin);
	bit6 = HAL_GPIO_ReadPin(PB5_GPIO_Port, PB5_Pin);
	bit7 = HAL_GPIO_ReadPin(PB6_GPIO_Port, PB6_Pin);
	bit8 = HAL_GPIO_ReadPin(PB7_GPIO_Port, PB7_Pin);
	bit9 = HAL_GPIO_ReadPin(PB8_GPIO_Port, PB8_Pin);
	bit10 = HAL_GPIO_ReadPin(PB9_GPIO_Port, PB9_Pin);
	bit11 = HAL_GPIO_ReadPin(PB10_GPIO_Port, PB10_Pin);
	bit12 = HAL_GPIO_ReadPin(PB11_GPIO_Port, PB11_Pin);
	bit13 = HAL_GPIO_ReadPin(PB12_GPIO_Port, PB12_Pin);
	bit14 = HAL_GPIO_ReadPin(PB13_GPIO_Port, PB13_Pin);
	bit15 = HAL_GPIO_ReadPin(PB14_GPIO_Port, PB14_Pin);

	result = bit1 * 1 + bit2 * 14 + bit3 * 13 + bit4 * 10 + bit5 * 15 + bit6 * 12 + bit7 * 11 + bit8 * 9 + bit9 * 8 + bit10 * 7 + bit11 * 6 + bit12 * 5 + bit13 * 4 + bit14 * 3 + bit15 * 2;

	switch(result)
	{
		case 1:
			 HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, 1);
			 HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, 1);
			 HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, 0);
			 HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, 1);
			 HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, 1);
			 HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, 0);
			 HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, 1);
			 break;

		case 2:
			 HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, 0);
			 HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, 0);
			 HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, 1);
			 HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, 1);
			 HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, 0);
			 HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, 0);
			 HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, 0);
			 break;

		case 3:
			 HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, 1);
			 HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, 0);
			 HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, 0);
			 HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, 1);
			 HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, 0);
			 HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, 0);
			 HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, 0);
			 break;

		 case 4:
			 HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, 1);
			 HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, 1);
			 HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, 0);
			 HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, 0);
			 HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, 1);
			 HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, 0);
			 HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, 0);
			 break;

		 case 5:
			 HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, 1);
			 HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, 0);
			 HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, 0);
			 HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, 0);
			 HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, 0);
			 HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, 1);
			 HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, 0);
			 break;

		 case 6:
			 HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, 0);
			 HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, 0);
			 HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, 0);
			 HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, 0);
			 HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, 0);
			 HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, 1);
			 HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, 0);
			 break;

		case 7:
			 HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, 1);
			 HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, 1);
			 HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, 0);
			 HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, 1);
			 HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, 0);
			 HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, 0);
			 HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, 1);
			 break;

		 case 8:
			 HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, 0);
			 HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, 0);
			 HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, 0);
			 HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, 0);
			 HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, 0);
			 HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, 0);
			 HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, 0);
			 break;

		 case 9:
			 HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, 1);
			 HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, 1);
			 HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, 0);
			 HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, 0);
			 HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, 0);
			 HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, 0);
			 HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, 0);
			 break;

		 case 10:
			 HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, 0);
			 HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, 1);
			 HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, 0);
			 HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, 0);
			 HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, 0);
			 HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, 0);
			 HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, 0);
			 break;

		 case 11:
			 HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, 0);
			 HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, 0);
			 HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, 0);
			 HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, 0);
			 HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, 1);
			 HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, 1);
			 HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, 0);
			 break;

		 case 12:
			 HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, 0);
			 HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, 0);
			 HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, 1);
			 HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, 0);
			 HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, 0);
			 HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, 1);
			 HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, 1);
			 break;

		 case 13:
			 HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, 0);
			 HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, 0);
			 HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, 0);
			 HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, 1);
			 HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, 1);
			 HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, 0);
			 HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, 0);
			 break;

		 case 14:
			 HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, 0);
			 HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, 0);
			 HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, 1);
			 HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, 0);
			 HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, 0);
			 HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, 1);
			 HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, 0);
			 break;

		 case 15:
			 HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, 0);
			 HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, 1);
			 HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, 1);
			 HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, 0);
			 HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, 0);
			 HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, 1);
			 HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, 0);
			 break;

		 default:
			 HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, 1);
			 HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, 1);
			 HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, 1);
			 HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, 1);
			 HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, 1);
			 HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, 1);
			 HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, 1);
			 break;
	}

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSE;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOD_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED1_Pin|LED2_Pin|LED3_Pin|LED4_Pin
                          |LED5_Pin|LED6_Pin|LED7_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin : LED1_Pin */
  GPIO_InitStruct.Pin = LED1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(LED1_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : LED2_Pin LED3_Pin LED4_Pin LED5_Pin
                           LED6_Pin LED7_Pin */
  GPIO_InitStruct.Pin = LED2_Pin|LED3_Pin|LED4_Pin|LED5_Pin
                          |LED6_Pin|LED7_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PB1_Pin PB2_Pin PB10_Pin PB11_Pin
                           PB12_Pin PB13_Pin PB14_Pin PB15_Pin
                           PB3_Pin PB4_Pin PB5_Pin PB6_Pin
                           PB7_Pin PB8_Pin PB9_Pin */
  GPIO_InitStruct.Pin = PB1_Pin|PB2_Pin|PB10_Pin|PB11_Pin
                          |PB12_Pin|PB13_Pin|PB14_Pin|PB15_Pin
                          |PB3_Pin|PB4_Pin|PB5_Pin|PB6_Pin
                          |PB7_Pin|PB8_Pin|PB9_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

