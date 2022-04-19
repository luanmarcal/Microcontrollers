/*
 * eeprom.h
 *
 *  Created on: 1 de abr de 2022
 *      Author: luanmarcal
 */

#ifndef EEPROM_EEPROM_H_
#define EEPROM_EEPROM_H_

#include <stdint.h>
#include <math.h>

#include "stm32g0xx.h"


typedef struct{
	I2C_HandleTypeDef *i2c;
	uint32_t DevAddress;
	uint32_t Size;
	uint8_t words;
}eeprom_t;


/*
 * Prototypes
 */

void eeprom_init(eeprom_t *obj, I2C_HandleTypeDef *i2c, uint32_t DevAddress, uint32_t Size);

void eeprom_read(eeprom_t *obj, uint32_t DataAddr, uint8_t *pData, uint16_t len);

void eeprom_write(eeprom_t *obj, uint32_t DataAddr, uint8_t *pData, uint16_t len);


#endif /* EEPROM_EEPROM_H_ */
