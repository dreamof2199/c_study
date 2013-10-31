#include	<math.h>
#include	<stdio.h>

int main ( void )
{
	int a, b, c;

	printf ( "Enter a b c seperate by space: " );
	scanf ( "%i %i %i", &a, &b, &c );

	void solveTheQuadratic (int, int, int);
	solveTheQuadratic ( a, b, c );

	return 0;
}	

void solveTheQuadratic ( int a, int b, int c )
{
	int discriminant (int a,int b,int c);
	float root(int discriminant);
	if (discriminant( a, b, c ) < 0) {
		printf ( "The result is inmaginary numbers!\n" );
		return;
	}

	printf ( "The solves of \"%ix2 + %ix + %i = 0\" is %f and %f.\n", a, b, c, (-b + root (discriminant (a, b, c))) / (2 * a ), (-b - root (discriminant (a, b, c))) / (2 * a ) );

}

int discriminant ( int a, int b, int c )
{
	return b * b - 4 * a * c;
}

float root ( int discriminant )
{
	float result = sqrt(discriminant);
	return result;
}
