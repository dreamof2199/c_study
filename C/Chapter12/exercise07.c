// Bit_get function to extract the specified number bits from the first argument and return hte result

#include	<stdio.h>

// return the machine's int size
unsigned int int_size ( void )
{
	int result = 0, implementZero = ~0;

	while (implementZero != 0)
	{
		implementZero <<= 1;	// 只能左移，因为机器是算术移位
		result++;
	}

	return result;
}

int positive_module ( int n)
{
	unsigned int int_size ( void );
	
	if ( n > 0)
		return n % int_size ();
	else
		return -n % int_size ();
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

unsigned int bitpat_get ( unsigned x, int m, int n )
{
	unsigned int temp = 0u, result;
	
	int i = m, j = n;
	while ( j > 0)
	{
		temp = bit_set ( temp, i++);
		j--;
	}
	printf ( "temp = %0x\n", temp );
	printf ( "int_size () = %i \n", int_size () );
	printf ( "m = %i\n", m );
	printf ( "n = %i\n", n );
	printf ( "int_size () - m - n = %i\n", int_size () - m - n );
	result = ( temp & x ) >> ( int_size () - m - n );

	return result;
}

int main ( void )
{
	unsigned int bitpat_get ( unsigned x, int m, int n );

	printf ( "%0x\n", bitpat_get ( 0x214d, 17, 3) );

	return 0;
}			
