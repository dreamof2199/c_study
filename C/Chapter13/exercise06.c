#include	<stdio.h>
#define		IS_UPPER_CASE(a)	(((a)>='A')&&((a)<='Z'))?1:0

int main ( void )
{
	printf ( "is upper case of c is %i\n", IS_UPPER_CASE ('B') );
	return 0;
}			
