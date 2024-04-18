/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
 
#include	"r01lib.h"

I3C		i3c( I3C_SDA, I3C_SCL );	//	SDA, SCL

constexpr uint8_t	static_address	= 0x48;
constexpr uint8_t	dynamic_address	= 0x08;
uint8_t				w_data[]	= { 0 };
uint8_t				r_data[ 2 ];


int main( void )
{
	PRINTF( "P3T1755 basic operation sample\r\n");

	i3c.ccc_broadcast( CCC::BROADCAST_RSTDAA, NULL, 0 ); // Reset DAA
	i3c.ccc_set( CCC::DIRECT_SETDASA, static_address, dynamic_address << 1 ); // Set Dynamic Address from Static Address

	while ( true )
	{
		i3c.write( dynamic_address, w_data, sizeof( w_data ), I3C::NO_STOP );
		i3c.read(  dynamic_address, r_data, sizeof( r_data ) );

		PRINTF( "%f\r\n", (((int)r_data[ 0 ]) << 8 | r_data[ 1 ]) / 256.0 );
		wait( 1 );
	}
}
