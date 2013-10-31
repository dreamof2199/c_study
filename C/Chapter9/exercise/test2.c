
#include	<stdio.h>

struct date
{
	int month;
	int day;
	int year;
} fromDate, toDate;

int main ( void )
{
	int n1, n2, daysInterval;
	int formula (struct date);

	printf ( "Enter two date like (2012/5/5 2012/7/12): " );
	scanf ( "%i/%i/%i %i/%i/%i", &fromDate.year, &fromDate.month, &fromDate.day, &toDate.year, &toDate.month, &toDate.day );

	n1 = formula ( fromDate );
	n2 = formula ( toDate );
	daysInterval = n2 - n1;

	printf ( "Days from %i/%i/%i to %i/%i/%i is %i.\n", fromDate.year, fromDate.month, fromDate.day, toDate.year, toDate.month, toDate.day, daysInterval );

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
