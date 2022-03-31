/**
 * @file res_switch_case.h
 * @author Suneesh-S (you@domain.com)
 * @brief Header file for the resistor code calculator's switch functions
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __RES_SWITCH_CASE_H
#define __RES_SWITCH_CASE_H
/**
 * @brief print the exact code for the color to be enter
 * 
 */
void    print_codes( void );
/**
 * @brief Return the resistor color value by using switch case
 * 
 * @return double 
 */
double  decode_char( char );
/**
 * @brief Return the resistor tolerance value by using switch case
 * 
 * @return double 
 */
double  tolerance_char( char );
/**
 * @brief Return the resistor ppm value by using switch case
 * 
 * @return double 
 */
double ppm_char( char );

#endif