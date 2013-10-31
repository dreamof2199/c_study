
#include	<stdio.h>

int main ( void )
{
	printf ( "--n----triangularNumber\n" );
	
	int i = 5;

	for( ; i <51; ){
		printf ( "--%2i---%i\n", i, i * ( i + 1) / 2 );
		i += 5;
	}
	return 0;
}			
