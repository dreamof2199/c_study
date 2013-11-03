// Function to search specified pattern of bits

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

int bitpat_search( unsigned int source, unsigned int pattern, int n )
{
	unsigned int temp_pattern, temp_source,  loc;
	unsigned int int_size ( void );
	int positive_module ( int n);
	
	for ( loc = 0; loc <= int_size () - n; loc++ )
	{
		
	int j = 0, k = 0;
	temp_source = source;

	while ( j < n)
	{
		temp_source = bit_set ( temp_source, loc + j );
		j++;
	}

	temp_pattern =  pattern << ( int_size () - n - loc );
	while ( k < loc )
	{
		temp_pattern = bit_set ( temp_pattern, k );
		k++;
	}
	k = loc + n ;

	while ( k < int_size () )
	{
		temp_pattern = bit_set ( temp_pattern, k );
		k++;
	}
	
	printf ( "temp_pattern is %0x and temp_source is %0x and loc is %i\n", temp_pattern, temp_source, loc );
	if ( ( temp_pattern & temp_source ) == source)
		return loc;
	}

	return -1;
}
int main ( void )
{
	printf ( "bitpat_search result: %i\n",  bitpat_search (0xe1f4, 0x5, 3) );
	return 0;
}			
