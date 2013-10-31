
#include	<stdio.h>

int main ( void )
{
	int n, triangularNumber;
	
	triangularNumber = 0;

	for ( n = 1; n <= 200; n++){
		triangularNumber += n;
		printf ("%-2i           %i\n", n, triangularNumber);
	}
	printf ( "The 200th triangular number is %i\n", triangularNumber );
	return 0;
}			
