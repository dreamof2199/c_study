#include 	<stdbool.h>
#include	<stdio.h>

struct date
{
	int month;
	int day;
	int year;
};

struct date dateUpdate ( struct date *today )
{
	struct date tomorrow;
	int numberOfDays (struct date d);

	if ( today->day != numberOfDays (*today) ) 
	{
		tomorrow.day = today->day + 1;
		tomorrow.month = today->month;
		tomorrow.year = today->year;
	}
	else if ( today->month == 12 ) 
	{
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today->year + 1;
	}
	else 
	{
		tomorrow.day = 1;
		tomorrow.month = today->month + 1;
		tomorrow.year = today->year;
	}

	return tomorrow;
}

int numberOfDays ( struct date d )
{
	int days;
	bool isLeapYear ( struct date d);
	const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if ( isLeapYear (d) == true && d.month == 2 )
		days = 29;
	else
		days = daysPerMonth[d.month - 1];

	return days;
}

bool isLeapYear ( struct date d )
{
	bool leapYearFlag;

	if ( (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0 )
		leapYearFlag = true;
	else 
		leapYearFlag = false;

	return leapYearFlag;
}

int main ( void )
{
	struct date *input, today, tomorrow;
	int numberOfDays (struct date d);
	struct date dateUpdate ( struct date *);

	printf ( "Enter today's date (mm dd yyyy): " );
	scanf ( "%i%i%i", &today.month, &today.day, &today.year );

	input = &today;
	tomorrow = dateUpdate (input);

	printf ( "Tomorrow's date is %i/%i/%.2i.\n", tomorrow.month, tomorrow.day, tomorrow.year % 100 );

	return 0;
}

