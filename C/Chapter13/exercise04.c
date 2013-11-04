#include	<stdio.h>
#define		MAX3(x,y,z)	( (x) > (((y) > (z))?(y):(z))? (x):(((y) > (z))?(y):(z)) )

int main ( void )
{

	printf ( "the max of 300 700 and 400 is %i\n", MAX3 (300,700,400));
	return 0;
}			
