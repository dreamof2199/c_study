
#include	<stdio.h>

int main ( void )
{
	int ratingCounters[11], i, response, times;

	for ( i = 1; i <= 10; ++i )
		ratingCounters[i] = 0;

	printf ( "The times you want to excute(less than 999).\n" );
	scanf ( "%i", &times );

	if ( times > 999 || times < 1 ) {
		printf ( "You entered an incorrect number!\n" );
		return 1;
	}

	printf ( "Enter your responses(input 0 ends the proc)\n" );

	for ( i = 1; i <= times; ++i ) {
		scanf ( "%i", &response );
		
		if ( response == 0 ) {
			printf ( "The proc ends.\n" );
			return 1;
		}
		else if ( response < 1 || response > 10 ) {
			printf ( "Bad response: %i\n", response );
		}
		else {
			++ratingCounters[response];
		}
	}
	
	printf ( "\n\nRating Number of Responses\n" );
	printf ( "------ -----------------\n" );

	for ( i = 1; i <= 10; ++i )
		printf ( "%4i%14i\n", i, ratingCounters[i] );
	return 0;
}			
