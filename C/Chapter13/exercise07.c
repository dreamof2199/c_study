#include	<stdio.h>
#define		IS_UPPER_CASE(a)	(((a)>='A')&&((a)<='Z'))?1:0
#define		IS_LOWER_CASE(a)	(((a)>='a')&&((a)<='z'))?1:0
#define		IS_ALPHABETIC(a)	IS_LOWER_CASE(a)||IS_UPPER_CASE(a)

int main ( void )
{
	printf ( "is alphabetic c is %i\n", IS_ALPHABETIC ('1') );
	return 0;
}			

