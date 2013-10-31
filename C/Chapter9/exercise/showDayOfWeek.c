
#include	<stdio.h>

struct date
{
	int month;
	int day;
	int year;
} inPutDate;

int main ( void )
{
	void displayDayOfWeek ( int n, struct date input);
	int dayOfWeek ( int n );
	int formula ( struct date input );

	printf ( "Please enter a date like yyyy/mm/dd (2013/09/12):  " );
	scanf ( "%i/%i/%i", &inPutDate.year, &inPutDate.month, &inPutDate.day );

	displayDayOfWeek ( dayOfWeek ( formula ( inPutDate) ), inPutDate );
	return 0;
}	

int formula ( struct date input )
{
	int result;
	if ( input.month <= 2 ) {
		input.year -= 1;
		input.month +=13;
	}
	else {
		input.month += 1;
	}

	result = 1461 * input.year / 4 + 153 * input.month / 5 + input.day;

	return result;
}

int dayOfWeek ( int n )
{
	int result = ( n - 621049 ) % 7;
	return result;
}

void displayDayOfWeek ( int n, struct date input)
{

	switch ( n ) {
		case 0:	
			printf ( "The day %i/%i/%i is Sunday.\n", input.year, input.month, input.day );
			break;

		case 1:	
			printf ( "The day %i/%i/%i is Monday.\n", input.year, input.month, input.day );
			break;

		case 2:	
			printf ( "The day %i/%i/%i is Tuesday.\n", input.year, input.month, input.day );
			break;

		case 3:
			printf ( "The day %i/%i/%i is Wednesday.\n", input.year, input.month, input.day );	
			break;

		case 4:	
			printf ( "The day %i/%i/%i is Thursday.\n", input.year, input.month, input.day );
			break;

		case 5:	
			printf ( "The day %i/%i/%i is Friday.\n", input.year, input.month, input.day );
			break;

		case 6:	
			printf ( "The day %i/%i/%i is Saturday.\n", input.year, input.month, input.day );
			break;

		default:
			printf ( "Here comes an error!\n" );	
			break;
	}			
}
