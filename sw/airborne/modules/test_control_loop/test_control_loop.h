/*
 * Copyright (C) TomasDuro
 *
 * This file is part of paparazzi
 *
 * paparazzi is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * paparazzi is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with paparazzi; see the file COPYING.  If not, see
 * <http://www.gnu.org/licenses/>.
 */
/**
 * @file "modules/test_control_loop/test_control_loop.h"
 * @author TomasDuro
 *
 */

#ifndef TEST_CONTROL_LOOP_H
#define TEST_CONTROL_LOOP_H

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

// extern void test_control_loop_func(void);

extern bool control_switch(void);

void test_control_loop_init(void);

#endif
