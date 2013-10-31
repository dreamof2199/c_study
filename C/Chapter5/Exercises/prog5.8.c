
#include	<stdio.h>

int main ( void )
{
	int number, right_digit, temp = 0;

	printf ( "Enter your number.\n" );
	scanf ( "%i", &number );
	

	while( number != 0) {
		right_digit = number % 10;
		temp += right_digit;
		number = number / 10;
	}

	printf ( "%i\n", temp );
	return 0;
}			
