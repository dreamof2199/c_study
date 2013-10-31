
#include	<stdio.h>

int main ( void )
{
	int matrixA[4][5] = {
		{1, 2, 3, 4, 5 },
		{6, 7, 8, 9, 10},
		{11,12,13,14,15},
		{16,17,18,19,20},
	};
	int matrixB[5][4];

	void transposeMatrix (int matrixA[][5], int matrixB[][4]);
	void displayMatrix (int matrixB[][4]);
	
	transposeMatrix ( matrixA, matrixB);
	displayMatrix ( matrixB);

	return 0;
}	

void transposeMatrix ( int matrixA[][5], int matrixB[][4] )
{
	int row, col;
	for ( row = 0; row < 4; row++){
		for ( col = 0; col < 5; col++)
			matrixB[col][row] = matrixA[row][col];
	}
}

void displayMatrix ( int matrixB[][4] )
{
	int row, col;
	for ( row = 0; row < 5; row++) {
		for ( col = 0; col < 4; col++)
			printf ( "%5i", matrixB[row][col] );
		printf ( "\n" );
	}
}
