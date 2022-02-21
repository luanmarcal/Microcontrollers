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
uint32_t bit1 , bit2, bit3, bit4, result = 0;
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

	 bit1 = HAL_GPIO_ReadPin(PC3_GPIO_Port, PC3_Pin);
	 bit2 = HAL_GPIO_ReadPin(PC2_GPIO_Port, PC2_Pin);
	 bit3 = HAL_GPIO_ReadPin(PF1_GPIO_Port, PF1_Pin);
	 bit4 = HAL_GPIO_ReadPin(PF0_GPIO_Port, PF0_Pin);

	 result = bit1 + bit2 * 2 + bit3 * 4 + bit4 * 8;
//	 result++;                    //103 - 109 = Loop to show all the numbers

//	 HAL_Delay(1000);
//	 if(result == 15)
//		 while(result != 1){
//			 result--;
//		 }
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

  /** Configure the main internal regulator output voltage
  */
  HAL_PWREx_ControlVoltageScaling(PWR_REGULATOR_VOLTAGE_SCALE1);
  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSIDiv = RCC_HSI_DIV1;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = RCC_PLLM_DIV1;
  RCC_OscInitStruct.PLL.PLLN = 8;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = RCC_PLLQ_DIV2;
  RCC_OscInitStruct.PLL.PLLR = RCC_PLLR_DIV2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
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
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOF_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, LED2_Pin|LED3_Pin|LED7_Pin|LED6_Pin
                          |LED1_Pin|LED5_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED2_Pin LED3_Pin LED7_Pin LED6_Pin
                           LED1_Pin LED5_Pin */
  GPIO_InitStruct.Pin = LED2_Pin|LED3_Pin|LED7_Pin|LED6_Pin
                          |LED1_Pin|LED5_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : PF0_Pin PF1_Pin */
  GPIO_InitStruct.Pin = PF0_Pin|PF1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);

  /*Configure GPIO pins : PC2_Pin PC3_Pin */
  GPIO_InitStruct.Pin = PC2_Pin|PC3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pin : LED4_Pin */
  GPIO_InitStruct.Pin = LED4_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(LED4_GPIO_Port, &GPIO_InitStruct);

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

