
#include	<stdio.h>

int main ( void )
{
	unsigned int value = 1;
	
	printf ( "%x\n", value |= 7 << 18 );

	return 0;
}			
