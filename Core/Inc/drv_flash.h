/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2018-12-5      SummerGift   first version
 */

#ifndef __DRV_FLASH_H__
#define __DRV_FLASH_H__
#include "stm32f4xx.h"
#ifdef __cplusplus
extern "C" {
#endif

int stm32_flash_read(uint32_t addr, uint8_t *buf, size_t size);
int stm32_flash_write(uint32_t addr, const uint8_t *buf, size_t size);
int stm32_flash_erase(uint32_t addr, size_t size);

#ifdef __cplusplus
}
#endif

#endif  /* __DRV_FLASH_H__ */
