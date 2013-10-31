#include 	<stdbool.h>
#include	<stdio.h>

struct date
{
	int month;
	int day;
	int year;
};

struct time
{
	int hour;
	int minutes;
	int seconds;
};

struct dateAndTime
{
	struct date nowDate;
	struct time nowTime;
};

struct date dateUpdate ( struct date today )
{
	struct date tomorrow;
	int numberOfDays (struct date d);

	if ( today.day != numberOfDays (today) ) 
	{
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	}
	else if ( today.month == 12 ) 
	{
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}
	else 
	{
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
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

struct time timeUpdate ( struct time now )
{
	++now.seconds;
	if (now.seconds == 60) 
	{
		now.seconds = 0;
		++now.minutes;

		if (now.minutes == 60)
		{
			now.minutes = 0;
			++now.hour;
		
			if (now.hour == 24)
			{
				now.hour = 0;
			}
		}
	}

	return now;
}


struct dateAndTime clockKeeper ( struct dateAndTime now )
{
	struct dateAndTime result;
	result.nowTime = timeUpdate(now.nowTime);
	if (result.nowTime.hour == 0 && result.nowTime.minutes == 0 && result.nowTime.seconds == 0)
		result.nowDate = dateUpdate (now.nowDate);
	else
		result.nowDate = now.nowDate;
	return result;
}

int main ( void )
{
	struct dateAndTime now,later;

	printf ( "Please enter an time and date like \"2013/9/16 11:7:9\":    " );
	scanf ( "%i/%i/%i %i:%i:%i", &now.nowDate.year, &now.nowDate.month, &now.nowDate.day, &now.nowTime.hour, &now.nowTime.minutes, &now.nowTime.seconds );

	printf ( "The time now is %i/%i/%i %.2i:%.2i:%.2i.\n",now.nowDate.year, now.nowDate.month, now.nowDate.day, now.nowTime.hour, now.nowTime.minutes, now.nowTime.seconds );
	later = clockKeeper (now);
	printf ( "The time one second later is %i/%i/%i %.2i:%.2i:%.2i.\n", later.nowDate.year, later.nowDate.month, later.nowDate.day, later.nowTime.hour, later.nowTime.minutes, later.nowTime.seconds  );
	return 0;
}			
