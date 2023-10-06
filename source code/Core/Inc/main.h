/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#define DOT_Pin GPIO_PIN_4
#define DOT_GPIO_Port GPIOA
#define LED_Pin GPIO_PIN_5
#define LED_GPIO_Port GPIOA
#define ENA_Pin GPIO_PIN_6
#define ENA_GPIO_Port GPIOA
#define ENB_Pin GPIO_PIN_7
#define ENB_GPIO_Port GPIOA
#define SEGA_Pin GPIO_PIN_0
#define SEGA_GPIO_Port GPIOB
#define SEGB_Pin GPIO_PIN_1
#define SEGB_GPIO_Port GPIOB
#define SEGC_Pin GPIO_PIN_2
#define SEGC_GPIO_Port GPIOB
#define ENC_Pin GPIO_PIN_8
#define ENC_GPIO_Port GPIOA
#define END_Pin GPIO_PIN_9
#define END_GPIO_Port GPIOA
#define SEGD_Pin GPIO_PIN_3
#define SEGD_GPIO_Port GPIOB
#define SEGE_Pin GPIO_PIN_4
#define SEGE_GPIO_Port GPIOB
#define SEGF_Pin GPIO_PIN_5
#define SEGF_GPIO_Port GPIOB
#define SEGG_Pin GPIO_PIN_6
#define SEGG_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
