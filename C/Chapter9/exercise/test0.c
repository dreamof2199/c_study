#define MIN(A,B) ((A<B)?A:B)
#include	<stdio.h>

int main ( void )
{
	printf ( "MIN(3+23,5+6) * 2 = %i.\n",MIN(3+23,5+6) * 2 );
	int a = 5*11?5:11*2;
	printf ( "\na = %i" ,a);
	return 0;
}			
