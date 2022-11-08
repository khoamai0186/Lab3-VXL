/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
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
#define Button1_Pin GPIO_PIN_13
#define Button1_GPIO_Port GPIOC
#define Button2_Pin GPIO_PIN_14
#define Button2_GPIO_Port GPIOC
#define Button3_Pin GPIO_PIN_15
#define Button3_GPIO_Port GPIOC
#define RED1_Pin GPIO_PIN_3
#define RED1_GPIO_Port GPIOA
#define YELLOW1_Pin GPIO_PIN_4
#define YELLOW1_GPIO_Port GPIOA
#define GREEN1_Pin GPIO_PIN_5
#define GREEN1_GPIO_Port GPIOA
#define RED2_Pin GPIO_PIN_6
#define RED2_GPIO_Port GPIOA
#define YELLOW2_Pin GPIO_PIN_7
#define YELLOW2_GPIO_Port GPIOA
#define CA_Pin GPIO_PIN_0
#define CA_GPIO_Port GPIOB
#define CB_Pin GPIO_PIN_1
#define CB_GPIO_Port GPIOB
#define CC_Pin GPIO_PIN_2
#define CC_GPIO_Port GPIOB
#define BC_Pin GPIO_PIN_10
#define BC_GPIO_Port GPIOB
#define BD_Pin GPIO_PIN_11
#define BD_GPIO_Port GPIOB
#define BE_Pin GPIO_PIN_12
#define BE_GPIO_Port GPIOB
#define BF_Pin GPIO_PIN_13
#define BF_GPIO_Port GPIOB
#define BG_Pin GPIO_PIN_14
#define BG_GPIO_Port GPIOB
#define GREEN2_Pin GPIO_PIN_8
#define GREEN2_GPIO_Port GPIOA
#define EN0_Pin GPIO_PIN_10
#define EN0_GPIO_Port GPIOA
#define EN1_Pin GPIO_PIN_11
#define EN1_GPIO_Port GPIOA
#define EN2_Pin GPIO_PIN_12
#define EN2_GPIO_Port GPIOA
#define EN3_Pin GPIO_PIN_13
#define EN3_GPIO_Port GPIOA
#define CD_Pin GPIO_PIN_3
#define CD_GPIO_Port GPIOB
#define CE_Pin GPIO_PIN_4
#define CE_GPIO_Port GPIOB
#define CF_Pin GPIO_PIN_5
#define CF_GPIO_Port GPIOB
#define CG_Pin GPIO_PIN_6
#define CG_GPIO_Port GPIOB
#define BA_Pin GPIO_PIN_8
#define BA_GPIO_Port GPIOB
#define BB_Pin GPIO_PIN_9
#define BB_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
