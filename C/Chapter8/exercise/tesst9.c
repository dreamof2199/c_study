
#include	<stdio.h>

int main ( void )
{
	int u, v;
	printf ( "Enter u and v to get lcm ( seperate by space ): " );
	scanf ( "%i %i", &u, &v );

	int lcm (int, int);
	printf ( "The LCM of %i and %i is %i.\n", u, v, lcm (u, v) );

	return 0;
}	

int lcm ( int u, int v )
{
	int gcd (int , int);

	return u * v / gcd (u, v);
}

int gcd ( int u, int v )
{
	int temp;

	while ( v != 0){
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;
}
