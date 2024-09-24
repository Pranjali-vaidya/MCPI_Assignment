/*
 * ODR.h
 *
 *  Created on: Sep 24, 2024
 *      Author: sunbeam
 */

#ifndef ODR_H_
#define ODR_H_

#include "stm32f4xx.h"

#define GPIO_LED		GPIOD
#define LED_GREEN_PIN	12
#define LED_ORANGE_PIN	13
#define LED_RED_PIN		14
#define LED_BLUE_PIN	15

#define GPIO_LED_CLKEN	3

void LedInit(uint32_t pin);
void LedOn(uint32_t pin);
void LedOff(uint32_t pin);
void LedBlink(uint32_t pin, uint32_t delayMs);

#endif /* ODR_H_ */
