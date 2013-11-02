// Program to sort an array of integers into ascending order && Pointer Ver.

#include <stdio.h>

void sort (int *a, int n)
{
	int *aptr1, *aptr2, temp;

	for ( aptr1 = a; aptr1 < a + n - 1; ++aptr1 )
		for ( aptr2 = aptr1 + 1; aptr2 < a + n; ++aptr2 )
			if ( *aptr1 > *aptr2 ) {
				temp = *aptr1;
				*aptr1 = *aptr2;
				*aptr2 = temp;
			}
}

int main (void)
{
	int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
			44, -3, -9, 12, 17, 22, 6, 11 },*a;
	
	void sort (int *a, int n);

	printf ("The array before the sort:\n");

	for ( a = array ; a < array + 16; ++a )
		printf ("%i ", *a);

	sort (array, 16);

	printf ("\n\nThe array after the sort:\n");

	for ( a = array ; a < array + 16; ++a )
		printf ("%i ", *a);
	
	printf ("\n");

	return 0;
}
