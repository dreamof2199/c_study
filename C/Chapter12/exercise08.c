
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

unsigned int bit_set ( unsigned int value, int n )	//set to zero
{
	unsigned int i = 1, size;

	unsigned int int_size ( void );
	size = int_size ();

	n %= size;
	i = ~ ( i << (31 - n) );

	int bit_test ( unsigned int value, int n );

	if ( bit_test ( value, n) )
	{
		return value - ~i;
	}
	else
	{
		return value;
	}
}

unsigned int bitpat_set ( unsigned int *x, unsigned set, int start, int num )
{
	int i = num;
	unsigned int temp = set;

	unsigned int bit_set ( unsigned int value, int n );
	unsigned int int_size ( void );

	while ( i > 0 )
	{
		*x = bit_set ( *x, start + num - i );
		i--;
	}

	printf ( "after set zero %0x\n", *x );
	temp <<= int_size () - start - num;
	printf ( "temp is %0x\n", temp );

	return temp + *x;

}
int main ( void )
{
	unsigned int x = 0xffffffff;
	unsigned int bitpat_set ( unsigned int *x, unsigned set, int start, int num );

	printf ( "bitpat_set 0x55u is %0x\n", bitpat_set ( &x, 0x55u, 0, 8) );

	return 0;
}			
