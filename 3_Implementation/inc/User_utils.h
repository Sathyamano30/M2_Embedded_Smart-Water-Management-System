#ifndef __USER_UTILS_H__
#define __USER_UTILS_H__
/**
 * @file user_utils.h
 * @author Sathiyasr.M ()
 * @brief User defined utilities used across the project
 * @version 0.1
 * @date 2021-12-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "project_config.h"

void setup()
{
 lcd.begin(16,2);
 pinMode(trigger,OUTPUT);
 pinMode(echo,INPUT);
 pinMode(motor, OUTPUT);
 pinMode(buzzer, OUTPUT);
 lcd.print("  Water Level ");
 lcd.setCursor(0,1);
 lcd.print("   Indicator  ");
 delay(2000);
}

#endif /* __USER_UTILS_H__ */
