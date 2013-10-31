
#include	<stdio.h>

int main ( void )
{
	int n, number, triangularNumber, counter, times;
	
	printf ( "Please enter the times to excute:\n" );
	scanf ( "%i", &times );

	for( counter = 1; counter <= times; ++counter ) {
		printf ( "What triangular number do you want? \n" );
		scanf ("%i", &number);
		 
		triangularNumber = 0;

		for ( n= 1; n <number; ++n)
			triangularNumber += n;

		printf ( "Triangular number %i is %i\n\n", number, triangularNumber);
		 
	}
	return 0;
}			
