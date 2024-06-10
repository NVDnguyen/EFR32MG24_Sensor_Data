/***************************************************************************//**
 * @file
 * @brief Top level application functions
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

/***************************************************************************//**
 * Initialize application.
 ******************************************************************************/

#include "app.h"

SensorData data;
alarm_speaker_pin speaker_pin = {.port= gpioPortD, .number = 2};
button_pin btt_pin ={.port= gpioPortB,.number=3};
smoke_adc_pin smoke_pin = {.port = gpioPortA, .number =2};

void app_init(void)
{
  //fire, smoke, temp, hum, hutton, buzzer
  init_read_sensor(&smoke_pin, &btt_pin, &speaker_pin);


}

/***************************************************************************//**
 * App ticking function.
 ******************************************************************************/
void app_process_action(void)
{

  get_value_sensor(&data);
}
