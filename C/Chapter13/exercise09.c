#include	<stdio.h>
#define		ABSOLUTE_VALUE(x)	(((x)>0)?(x):(-(x)))

int main ( void )
{

	printf ( "the absolute value of -999 is %i\n", ABSOLUTE_VALUE(-999) );
	printf ( "the absolute value of 999 is %i\n", ABSOLUTE_VALUE(999) );
	return 0;
}			
