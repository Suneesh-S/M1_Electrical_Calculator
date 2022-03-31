/**
 * @file calc_function.h
 * @author Suneesh-S (you@domain.com)
 * @brief Header file for Electrical calculator application
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __CALC_FUNCTION_H
#define __CALC_FUNCTION_H

/**
 * @brief Calculate the resistance,tolerance and ppm value for the resistor code
 * 
 * @return double* 
 */
double* resistor_code_calc(int,char []);
/**
 * @brief Calculate the ohms law parameters
 * 
 * @return float* 
 */
float* ohms_law_calc(float []);
/**
 * @brief Calculate the series resistance to drive the LED
 * 
 * @return double* 
 */
double* LED_calc(double,double,double,double*);
/**
 * @brief calculate the battery life of the battery
 * 
 * @return float 
 */
float bat_life_calc(float,float);


#endif