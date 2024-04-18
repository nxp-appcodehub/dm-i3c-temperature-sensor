/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
 
void	init_pin_control( void );
void	led_set_color( float temp, float ref );
void	led_all( bool v );
void	led_pin_control( int v );
void	ibi_trigger_output( void );
