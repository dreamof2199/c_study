// return the number of bits contained in an int on my computer

#include	<stdio.h>

int int_size ( void )
{
	int result = 0, implementZero = ~0;

	while (implementZero != 0)
	{
		implementZero <<= 1;	// ֻ�����ƣ���Ϊ������������λ
		result++;
	}

	return result;
}
int main ( void )
{
	printf ( "%i\n", int_size() );

	return 0;
}			
