
#include	<stdio.h>

void calculateTriangularNumber ( int n )
{
	auto int i, triangularNumber = 0;

	for ( i = 1; i <= n; ++i ) {
		triangularNumber += i;
	}

	printf ( "Triangular number %i is %i\n", n, triangularNumber );
}			


#include	<stdio.h>

int main ( void )
{
	calculateTriangularNumber (10);
	calculateTriangularNumber (20);
	calculateTriangularNumber (50);

	return 0;
}			
