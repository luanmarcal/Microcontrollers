/*
 * eeprom.c
 *
 *  Created on: 1 de abr de 2022
 *      Author: luanmarcal
 */

#include "eeprom.h"

void eeprom_init(eeprom_t *obj, I2C_HandleTypeDef *i2c, uint32_t DevAddress, uint32_t Size){
	if (obj != NULL){
		obj->i2c = i2c;
		obj->Size = Size;
		obj->DevAddress = DevAddress;
		obj->words = ceil(Size/(pow(2, 16)));
	}
}

void eeprom_read(eeprom_t *obj, uint32_t DataAddr, uint8_t *pData, uint16_t len){
	if (obj != NULL){
		HAL_I2C_Mem_Read(obj->i2c, obj->DevAddress, DataAddr, obj->words, pData, len, 100);
	}
}

void eeprom_write(eeprom_t *obj, uint32_t DataAddr, uint8_t *pData, uint16_t len){
	if (obj != NULL){
		HAL_I2C_Mem_Write(obj->i2c, obj->DevAddress, DataAddr, obj->words, pData, len, 100);
		HAL_Delay(10);
	}
}
