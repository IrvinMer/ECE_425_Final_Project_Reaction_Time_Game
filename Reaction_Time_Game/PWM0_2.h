/**
 * @file PWM0_2.h
 *
 * @brief Header file for the PWM0_2 driver.
 *
 * This file contains the function definitions for the PWM0_2 driver.
 * It uses the Module 0 PWM Generator 0 to generate a PWM signal with the PE4 pin.
 *
 * @note This driver assumes that the system clock's frequency is 50 MHz.
 *
 * @note This driver assumes that the PWM_Clock_Init function has been called
 * before calling the PWM0_2_Init function.
 *
 * @author Irvin
 */
 
#include "TM4C123GH6PM.h"

/**
 * @brief Initializes the PWM Module 0 Generator 2 with the specified period and duty cycle.
 *
 * This function initializes the PWM Module 0 Generator 2 with the given period constant and duty cycle.
 * It configures the PE4 pin to operate as a Module 0 PWM4 pin (M0PWM4) to output the PWM signal.
 * period_constant determines the PWM signal's frequency. The specified duty_cycle value must be less 
 * than the period_constant.
 *
 * @param period_constant The period constant for the PWM signal that determines the
 *                        PWM signal's frequency.
 *
 * @param duty_cycle The duty cycle, as a percentage of period_constant, for the PWM signal.
 *                   This value controls pulse width of the PWM signal.
 *
 * @return None
 */
void PWM0_2_Init(uint16_t period_constant, uint16_t duty_cycle);

/**
 * @brief Updates the PWM Module 0 Generator 2 duty cycle for the PWM signal on the PE4 pin (M0PWM4).
 *
 * @param duty_cycle The new duty cycle for the PWM signal on the PE4 pin (M0PWM4).
 *
 * @return None
 */
void PWM0_2_Update_Duty_Cycle(uint16_t duty_cycle);