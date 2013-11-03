#define IS_LEAP_YEAR(y) y % 4 == 0 && y % 100 != 0 \
|| y % 400 == 0

#include	<stdio.h>

int main ( void )
{
	if ( IS_LEAP_YEAR (2011) )
		printf ( "True\n" );
	else
		printf ( "False\n" );

	return 0;
}			
