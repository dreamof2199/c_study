
#include	<stdio.h>

int main ( void )
{
	printf ( "####--n--####---n2---####\n" );
	int i = 1;
	for(; i < 11; ++i){
		printf ( "     %2i        %3i       \n", i, i*i );
	}

	return 0;
}			
