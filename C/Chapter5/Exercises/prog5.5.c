
#include	<stdio.h>

int main ( void )
{
	int n, number, triangularNumber, counter, times;
	
	printf ( "Please enter the times to excute:\n" );
	scanf ( "%i", &times );

	counter = 1;
	while ( counter <= times ) {
		printf ( "What triangular number do you want? \n" );
		scanf ("%i", &number);
		 
		triangularNumber = 0;
	
		n = 1;
		while ( n < number ) {
			triangularNumber += n;
			n++;
		}

		counter++;
		printf ( "Triangular number %i is %i\n\n", number, triangularNumber);
		 
	}
	return 0;
}			
