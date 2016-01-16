/**
  ******************************************************************************
  * @addtogroup PIOS PIOS Core hardware abstraction layer
  * @{
  * @addtogroup PIOS_MS4525 MS4525 Functions
  * @brief Hardware functions to deal with the Eagle Tree Airspeed MicroSensor V3
  * @{
  *
  * @file       pios_ms4525.h
  * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2012.
  * @brief      ETASV3 Airspeed Sensor Driver
  * @see        The GNU Public License (GPL) Version 3
  *
  ******************************************************************************/
/* 
 * This program is free software; you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation; either version 3 of the License, or 
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License 
 * for more details.
 * 
 * You should have received a copy of the GNU General Public License along 
 * with this program; if not, write to the Free Software Foundation, Inc., 
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#define MS4525_I2C_ADDR			0x28


int16_t PIOS_MS4525_ReadAirspeed (void);