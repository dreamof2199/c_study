#include	<stdio.h>
#define		IS_UPPER_CASE(a)	(((a)>='A')&&((a)<='Z'))?1:0
#define		IS_LOWER_CASE(a)	(((a)>='a')&&((a)<='z'))?1:0
#define		IS_ALPHABETIC(a)	IS_LOWER_CASE(a)||IS_UPPER_CASE(a)
#define		IS_DIGIT(a)		(((a)>='0')&&((a)<='9'))?1:0
#define		IS_SPECIAL(a)		(IS_ALPHABETIC(a)||IS_DIGIT(a))?0:1

int main ( void )
{
	printf ( "is alphabetic c is %i\n", IS_ALPHABETIC ('c') );
	printf ( "is alphabetic '0' is %i\n", IS_ALPHABETIC ('0') );
	printf ( "is digit '9' is %i\n", IS_DIGIT('9') );
	printf ( "is digit 'a' is %i\n", IS_DIGIT('a') );
	printf ( "is special '9' is %i\n", IS_SPECIAL('9') );
	printf ( "is special '$' is %i\n", IS_SPECIAL('$') );
	return 0;
}			

