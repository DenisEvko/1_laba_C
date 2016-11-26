#ifndef MAIN_H
#define MAIN_H

#include "stm32f10x.h"

#define LED2_ON()		GPIOC->BSRR |= GPIO_BSRR_BS8
#define LED2_OFF()	GPIOC->BSRR |= GPIO_BSRR_BR8

#define LED1_ON()		GPIOC->BSRR |= GPIO_BSRR_BS9
#define LED1_OFF()	GPIOC->BSRR |= GPIO_BSRR_BR9


#endif
