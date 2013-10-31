#include	<stdio.h>
#include	<stdbool.h>

int main ( void )
{
	int p, d;
	_Bool isPrime;

	for ( p = 2; p < 51; ++p ) {
		isPrime = 1;

		for ( d = 2; d < p; ++d )
			if ( p % d == 0 )
				isPrime = 0;
		if ( isPrime != 0 )
			printf ( "%i  ", p);
	}
	
	printf ( "\n" );

	return 0;
}			
