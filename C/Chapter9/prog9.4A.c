#include 	<stdbool.h>
#include	<stdio.h>

struct date
{
	int month;
	int day;
	int year;
};

struct date dateUpdate ( struct date today )
{
	struct date tomorrow;
	int numberOfDays (struct date d);

	if ( today.day != numberOfDays (today) ) 
	{
		tomorrow = (struct date) {today.month, today.day + 1, today.year};
	}
	else if ( today.month == 12 ) 
	{
		tomorrow = (struct date) {1, 1, today.year + 1};
	}
	else 
	{
		tomorrow = (struct date) {today.month + 1, 1, today.year};
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
	struct date today, tomorrow;
	int numberOfDays (struct date d);
	struct date dateUpdate ( struct date );

	printf ( "Enter today's date (mm dd yyyy): " );
	scanf ( "%i%i%i", &today.month, &today.day, &today.year );

	tomorrow = dateUpdate (today);

	printf ( "Tomorrow's date is %i/%i/%.2i.\n", tomorrow.month, tomorrow.day, tomorrow.year % 100 );

	return 0;
}
