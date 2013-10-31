
#include	<stdio.h>

int main ( void )
{
	int n, triangularNumber;
	
	triangularNumber = 0;

	n = 1;
	while( n <= 200 ){
		triangularNumber += n;
		printf ("%-2i           %i\n", n, triangularNumber);
		n++;
	}
	printf ( "The 200th triangular number is %i\n", triangularNumber );
	return 0;
}			
