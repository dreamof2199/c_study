
#include	<stdio.h>

int main ( void )
{
	int i;
	int prime(int);

	printf ( "Enter a number i to determine if it's a prime: " );
	scanf ( "%i", &i );

	if ( prime (i) == 1)
		printf ( "The number %i is a prime.\n", i );
	else
		printf ( "The number %i is not a prime.\n", i );

	return 0;
}

int prime ( int i )
{
	int j;
	for ( j = 2; j <= i / 2; j++){
		if ( i % j == 0)
			return 0;
	}
	if ( j > i / 2)
		return 1;
	else
		return 0;
	
}
