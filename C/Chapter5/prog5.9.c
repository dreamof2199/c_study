
#include	<stdio.h>

int main ( void )
{
	int number, right_number;

	printf ( "Enter your number.\n" );
	scanf ( "%i", &number );

	do {
		right_number = number % 10;
		printf ( "%i", right_number );
		number = number / 10;
	}
	while ( number != 0 );
	
	printf ( "\n" );

	return 0;
}			
