
#include	<stdio.h>

int main ( void )
{
	int n, number, triangularNumber;
	
	triangularNumber = 0;
	
	printf ( "What triangular number do you want? \n" );
	scanf ("%i", &number);

	n = 1; 
	while( n <= number){ 
		triangularNumber += n;
		n++;
	}
	printf ("Triangulaer number %i is %i\n", number, triangularNumber);

	return 0;
}			
