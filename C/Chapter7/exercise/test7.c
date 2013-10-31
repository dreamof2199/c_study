
#include	<stdio.h>

int main ( void )
{
	int p[150], primes[150], i, j, counter;

	counter = 0;

	for ( i = 0; i < 150; i++ ) {
		p[i] = 0;
	}

	i = 2;
	while ( i < 150 ) {
		if ( p[i] == 0 ) {
//			printf ( "----%-3d----\n",i );
//			printf ( "counter %i\n", counter );
			primes[counter] = i;
			counter += 1;
		}
		for ( j = 1; j * i <= 150; j++)
			p[i*j] = 1;
		i++;
	}

//	printf ( "counter %i\n", counter );

	for ( j = 0; j < counter; j++)
		printf ( "%-5i", primes[j] );

	printf ( "\n" );
	return 0;
}			
