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

	unsigned int int_size ( void );
	size = int_size ();

	n %= size;
	i = ~ ( i << (31 - n) );

	if (value == ( value & i))
		return 0;
	else
		return 1;
}

unsigned int bit_set ( unsigned int value, int n )
{
	unsigned int i = 1, size;

	unsigned int int_size ( void );
	size = int_size ();

	n %= size;
	i = ~ ( i << (31 - n) );

	int bit_test ( unsigned int value, int n );

	if ( bit_test ( value, n) )
	{
		return value;
	}
	else
	{
		return value + ~i;
	}
}
int main ( void )
{
	int bit_test ( unsigned int value, int n);

	printf ( "%0x\n", bit_test (4564u, 0) );

	printf ( "%0x\n", bit_set (4564u, 0) );

	return 0;
}

