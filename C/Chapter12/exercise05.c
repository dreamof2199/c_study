// bit_test and bit_set

#include	<stdio.h>

unsigned int int_size ( void )
{
	unsigned int result = 0, implementZero = ~0;

	while (implementZero != 0)
	{
		implementZero <<= 1;	// 只能左移，因为机器是算术移位
		result++;
	}

	return result;
}

int bit_test ( unsigned int value, int n )
{
	unsigned int i = 1, size;
	
	size = int_size ();
	printf ( "size is %i\n", size );

	i = ~ ( i << (31 - n) );

	if (value == ( value & i))
		return 1;
	else
		return 0;
}
int main ( void )
{
	int bit_test ( unsigned int value, int n);
	
	printf ( "%i\n", bit_test (4564u, 25) );

	return 0;
}			
