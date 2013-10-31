
#include	<stdio.h>

int main ( void )
{
	int array[5] = { 1, 32, 31, 314, 5435 };
	int arraySum (int array[], int n);
	printf ( "The sum of the array is %i.\n", arraySum (array, 5) );
	return 0;
}			

int arraySum ( int array[], int n )
{
	int i, result = 0;

	for ( i = 0; i < n ; ++i )
		result += array[i];
	return result;
}
