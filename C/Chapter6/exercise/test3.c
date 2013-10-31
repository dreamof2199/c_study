
#include	<stdio.h>

int main ( void )
{
	int num1, num2;

	printf ( "Please enter two numbers:  " );
	scanf ( "%i %i", &num1, &num2 );

	if ( num2 != 0 )
		printf ( "The division result is %.3f.\n", (float)num1 / num2 );
	else
		printf ( "num2 is zero!\n" );

	return 0;
}			
