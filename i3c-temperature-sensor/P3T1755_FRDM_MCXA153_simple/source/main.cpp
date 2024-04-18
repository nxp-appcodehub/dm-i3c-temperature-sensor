/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
 
#include	"r01lib.h"
#include	"temp_sensor/P3T1755.h"

#define P3T1755_ADDR_I2C			0x48U
#define P3T1755_ADDR_I3C			0x08U

I3C		i3c( I3C_SDA, I3C_SCL );	//	SDA, SCL

P3T1755		p3t1755( i3c, P3T1755_ADDR_I2C );

void	DAA_set_dynamic_ddress_from_static_ddress( uint8_t static_address, uint8_t dynamic_address );

int main( void )
{
	PRINTF("P3T1755 (Temperature sensor) I3C operation sample: getting temperature data\r\n");

	DAA_set_dynamic_ddress_from_static_ddress( P3T1755_ADDR_I2C, P3T1755_ADDR_I3C );
	p3t1755.address_overwrite( P3T1755_ADDR_I3C );

	float	temp;

	while ( true )
	{
		temp	= p3t1755;
		PRINTF( "Temperature: %8.4f˚C\r\n", temp );

		wait( 1 );
	}
}

void DAA_set_dynamic_ddress_from_static_ddress( uint8_t static_address, uint8_t dynamic_address )
{
	i3c.ccc_broadcast( CCC::BROADCAST_RSTDAA, NULL, 0 ); // Reset DAA
	i3c.ccc_set( CCC::DIRECT_SETDASA, static_address, dynamic_address << 1 ); // Set Dynamic Address from Static Address
}
