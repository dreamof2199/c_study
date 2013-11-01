
#include	<stdio.h>

int main (void)
{
	int i = 0;
	int * ptr;
	ptr = &i;
	i = (int) ptr;
	printf ( "%x\n", i );
	*ptr = 20;
	printf ( "%x\n", *ptr );
	return 0;
}
