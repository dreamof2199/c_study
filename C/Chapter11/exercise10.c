#include 	<stdbool.h>
#include	<stdio.h>

bool equalStrings ( const char *s1, const char *s2 )
{
	bool areEqual;

	while ( *s1 == *s2 && *s1 != '\0' && *s2 != '\0' )
	{
		++s1;
		++s2;
	}

	if ( *s1 == '\0'&& *s2 == '\0' )
		areEqual = true;
	else
		areEqual = false;

	return areEqual;
}
int main ( void )
{
	bool equalStrings (const char *s1, const char *s2);
	const char stra[] = "string compare test";
	const char strb[] = "string";

	printf ( "%i\n", equalStrings (stra, strb) );
	printf ( "%i\n", equalStrings (stra, stra) );
	printf ( "%i\n", equalStrings (strb, "string") );

	return 0;
}			

