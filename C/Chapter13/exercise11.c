#include	<ctype.h>
#include	<stdio.h>

int main ( void )
{
	printf ( "is upper of 'C' is %i\n", isupper('C') );
	printf ( "is upper of 'c' is %i\n", isupper('c') );
	printf ( "is isdigit of 'c' is %i\n", isdigit('c') );
	printf ( "is isdigit of '0' is %i\n", isdigit('0') );
	printf ( "is isalpha of 'c' is %i\n", isalpha('c') );
	printf ( "is isalpha of '9' is %i\n", isalpha('9') );
	return 0;
}			
