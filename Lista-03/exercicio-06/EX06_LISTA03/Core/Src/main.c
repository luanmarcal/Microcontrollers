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

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdint.h>
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

typedef struct{
	uint16_t frequencia[3];
	uint16_t contador;
}button01;

typedef struct{
	uint16_t frequencia[3];
	uint16_t contador;
}button02;

typedef struct{

	uint16_t frequencia[3];
	uint16_t contador;
}button03;

typedef struct{
	uint16_t frequencia[3];
	uint16_t contador;
}button04;


button01 white = {
		.contador = 0,
		.frequencia[0] = 50,
		.frequencia[1] = 100,
		.frequencia[2] = 500
};

button02 blue = {
		.contador = 0,
		.frequencia[0] = 50,
		.frequencia[1] = 100,
		.frequencia[2] = 500
};

button03 yellow = {
		.contador = 0,
		.frequencia[0] = 50,
		.frequencia[1] = 100,
		.frequencia[2] = 500
};

button04 red = {
		.contador = 0,
		.frequencia[0] = 50,
		.frequencia[1] = 100,
		.frequencia[2] = 500
};
/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */


/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

//void HAL_GPIO_EXTI_Falling_Callback(uint16_t GPIO_Pin){
//	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, 1);
//	Contadores.cntF++;
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
	  //white
	 if(HAL_GPIO_ReadPin(BUTTON01_GPIO_Port, BUTTON01_Pin)==0)
	 {
		 HAL_Delay(200);
		 white.contador++;
		 if(white.contador>3)
			 white.contador=1;
	 }
	 if(white.contador==1)
	 {
		 HAL_GPIO_TogglePin(LED01_GPIO_Port, LED01_Pin);
		 HAL_Delay(white.frequencia[0]);
	 }
	 if(white.contador==2)
	 {
		 HAL_GPIO_TogglePin(LED01_GPIO_Port, LED01_Pin);
		 HAL_Delay(white.frequencia[1]);
	 }
	 if(white.contador==3)
	 {
		 HAL_GPIO_TogglePin(LED01_GPIO_Port, LED01_Pin);
		 HAL_Delay(white.frequencia[2]);
	 }


	 //blue
	 if(HAL_GPIO_ReadPin(BUTTON02_GPIO_Port, BUTTON02_Pin)==0)
	 	 {
	 		 HAL_Delay(200);
	 		 blue.contador++;
	 		 if(blue.contador>3)
	 			 blue.contador=1;
	 	 }
	 	 if(blue.contador==1)
	 	 {
	 		 HAL_GPIO_TogglePin(LED02_GPIO_Port, LED02_Pin);
	 		 HAL_Delay(blue.frequencia[0]);
	 	 }
	 	 if(blue.contador==2)
	 	 {
	 		 HAL_GPIO_TogglePin(LED02_GPIO_Port, LED02_Pin);
	 		 HAL_Delay(blue.frequencia[1]);
	 	 }
	 	 if(blue.contador==3)
	 	 {
	 		 HAL_GPIO_TogglePin(LED02_GPIO_Port, LED02_Pin);
	 		 HAL_Delay(blue.frequencia[2]);
	 	 }

	 	//yellow
	 	if(HAL_GPIO_ReadPin(BUTTON03_GPIO_Port, BUTTON03_Pin)==0)
	 		 {
	 			 HAL_Delay(200);
	 			 yellow.contador++;
	 			 if(yellow.contador>3)
	 				 yellow.contador=1;
	 		 }
	 		 if(yellow.contador==1)
	 		 {
	 			 HAL_GPIO_TogglePin(LED03_GPIO_Port, LED03_Pin);
	 			 HAL_Delay(yellow.frequencia[0]);
	 		 }
	 		 if(yellow.contador==2)
	 		 {
	 			 HAL_GPIO_TogglePin(LED03_GPIO_Port, LED03_Pin);
	 			 HAL_Delay(yellow.frequencia[1]);
	 		 }
	 		 if(yellow.contador==3)
	 		 {
	 			 HAL_GPIO_TogglePin(LED03_GPIO_Port, LED03_Pin);
	 			 HAL_Delay(yellow.frequencia[2]);
	 		 }

	 	//red
	 		if(HAL_GPIO_ReadPin(BUTTON04_GPIO_Port, BUTTON04_Pin)==0)
	 			 {
	 				 HAL_Delay(200);
	 				 red.contador++;
	 				 if(red.contador>3)
	 					 red.contador=1;
	 			 }
	 			 if(red.contador==1)
	 			 {
	 				 HAL_GPIO_TogglePin(LED04_GPIO_Port, LED04_Pin);
	 				 HAL_Delay(red.frequencia[0]);
	 			 }
	 			 if(red.contador==2)
	 			 {
	 				 HAL_GPIO_TogglePin(LED04_GPIO_Port, LED04_Pin);
	 				 HAL_Delay(red.frequencia[1]);
	 			 }
	 			 if(red.contador==3)
	 			 {
	 				 HAL_GPIO_TogglePin(LED04_GPIO_Port, LED04_Pin);
	 				 HAL_Delay(red.frequencia[2]);
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
  HAL_GPIO_WritePin(GPIOC, LED02_Pin|LED03_Pin|LED01_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(LED04_GPIO_Port, LED04_Pin, GPIO_PIN_SET);

  /*Configure GPIO pins : LED02_Pin LED03_Pin LED01_Pin */
  GPIO_InitStruct.Pin = LED02_Pin|LED03_Pin|LED01_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : BUTTON04_Pin BUTTON03_Pin */
  GPIO_InitStruct.Pin = BUTTON04_Pin|BUTTON03_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);

  /*Configure GPIO pins : BUTTON02_Pin BUTTON01_Pin */
  GPIO_InitStruct.Pin = BUTTON02_Pin|BUTTON01_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pin : LED04_Pin */
  GPIO_InitStruct.Pin = LED04_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(LED04_GPIO_Port, &GPIO_InitStruct);

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

