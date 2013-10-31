
#include	<stdio.h>

int main ( void )
{
	int index;
	float floats[10], sum;

	printf ( "Enter the floats you want to evaluate:\n" );
	for ( index = 0; index < 10; index++ ) {
		scanf ( "%f", &floats[index] );
		sum += floats[index];
	}

	printf ( "The average is %f.\n", sum / 10 );

	return 0;
}			
