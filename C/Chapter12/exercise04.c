// Program to illustrate rotation of integers
// rotate left if count is positive 
// otherwise, rotate the value to the right

#include	<stdio.h>

int main ( void )
{
	unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;
	unsigned int rotate (unsigned int value, int n);

	printf ( "%x\n", rotate (w1, 8) );
	printf ( "%x\n", rotate (w1, -16) );
	printf ( "%x\n", rotate (w2, 4) );
	printf ( "%x\n", rotate (w2, -2) );
	printf ( "%x\n", rotate (w1, 0) );
	printf ( "%x\n", rotate (w1, 44) );

	return 0;
}	

// Function to rotate an unsigned int left or right

unsigned int rotate (unsigned int value, int n)
{
	unsigned int result, bits, size;

	int int_size ( void );

	size = int_size ();
	// scale down the shift count to a defined range
	
	if ( n > 0)
		n %= size;
	else
		n = -(-n % size);

	if ( n == 0)
		result = value;
	else if ( n > 0 )		// left rotate
	{
		bits = value >> (size - n);
		result = value << n | bits;
	}
	else				// right rotate
	{
		n = -n;
		bits = value << (size - n);
		result = value >> n | bits;
	}

	return result;
}

int int_size ( void )
{
	int result = 0, implementZero = ~0;

	while (implementZero != 0)
	{
		implementZero <<= 1;	// 只能左移，因为机器是算术移位
		result++;
	}

	return result;
}
