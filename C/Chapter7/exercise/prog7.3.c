
#include	<stdio.h>

int main ( void )
{
	int i, temp;
	int	Fibonaccin_2 = 0;	// by definition
	int	Fibonaccin_1 = 1;	// ditto

	for ( i =2; i < 15; ++i ) {
		temp = Fibonaccin_2 + Fibonaccin_1;
		printf ( "the fibonacci number is %i\n", temp );
		Fibonaccin_2 = Fibonaccin_1;
		Fibonaccin_1 = temp;
	}
		
	return 0;
}			
