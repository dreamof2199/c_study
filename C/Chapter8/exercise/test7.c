
#include	<stdio.h>

int main ( void )
{
	long int x_to_the_n ( int x , int n);
	printf ( "%li\n", x_to_the_n ( 9, 6 ));
	return 0;
}			

long int x_to_the_n ( int x , int n)
{
	long int result = x;
	int i;

	for ( i = 0; i < n; i++)
		result *= x;

	return result;
}
