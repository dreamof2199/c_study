
#include	<stdio.h>

int main ( void )
{
	printf ( "-- n----factorial\n" );
	
	int i = 1, temp = 1;

	for( ; i < 11; ){
		temp *= i;
		printf ( "--%2i----%i\n", i, temp );
		i += 1;
	}
	return 0;
}			
