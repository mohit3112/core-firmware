/**
 ******************************************************************************
 * @file    spark_disable_wlan.h
 * @author  Satish Nair
 * @version V1.0.0
 * @date    6-March-2014
 * @brief   Header to be included to prevent the core from starting the wlan
 ******************************************************************************
  Copyright (c) 2013-14 Spark Labs, Inc.  All rights reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation, either
  version 3 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, see <http://www.gnu.org/licenses/>.
  ******************************************************************************
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __SPARK_DISABLE_WLAN_H
#define __SPARK_DISABLE_WLAN_H

class SparkDisableWlan {
public:
	SparkDisableWlan()
	{
		SPARK_WLAN_SETUP = 0;
	}
};

SparkDisableWlan sparkDisableWlan;

#endif  /* __SPARK_DISABLE_WLAN_H */
