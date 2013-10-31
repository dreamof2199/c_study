
#include	<stdio.h>

int main ( void )
{
	int num1, num2;

	printf ( "Please enter two numbers: " );
	scanf ( "%i %i", &num1, &num2 );

	if ( num1 % num2 == 0 )
		printf ( "num1 is evenly divided by num2.\n" );
	else
		printf ( "num1 can't be evenly divided by num2.\n" );

	return 0;
}			
