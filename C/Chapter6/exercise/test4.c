
#include	<stdio.h>

int main ( void )
{
	float accumulator = 0;
	int number;
	char operator;

	while ( true ) {
		printf ( "Please enter a number and a operator:  " );
		scanf ( "%f %c", &number, &operator );

		if ( operator != 'E' )
			switch ( operator ) {
				case 'S':
					accumulator = number;
					printf ( "Contents of Accumulator is %.4f\n" );
					break;
				case '/':
					if ( number != 0 )
						accumulator /= number;
						printf ( "Contents of Accumulator is %.4f\n" );
					else
						printf ( "Error, divided by zero!\n" );
					break;
				case '*':
					accumulator *= number;
					printf ( "Contents of Accumulator is %.4f\n" );
					break;
				default:
					printf ( "The operator is not right!\n" );
			}
		
	}
	return 0;
}			
