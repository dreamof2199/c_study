
#include	<stdio.h>

struct time
{
	int hour;
	int minutes;
	int seconds;
} fromTime, toTime;

int main ( void )
{
	struct time passedTime;
	struct time elapsed_time (struct time, struct time);

	printf ( "Please enter two time like (hh:mm:ss hh:mm:ss): " );
	scanf ( "%i:%i:%i %i:%i:%i", &fromTime.hour, &fromTime.minutes, &fromTime.seconds, &toTime.hour, &toTime.minutes, &toTime.seconds );

	passedTime = elapsed_time (fromTime, toTime);
	printf ( "\nThe time has passed %i:%i:%i.",passedTime.hour, passedTime.minutes, passedTime.seconds );

	return 0;
}	


struct time elapsed_time ( struct time fromTime, struct time toTime )
{
	// calculate seconds
	if ( toTime.seconds >= fromTime.seconds)
	{
		toTime.seconds = toTime.seconds - fromTime.seconds;
	} else 
	{
		if ( toTime.minutes >= 1 )
		{
			toTime.minutes -=1;
			toTime.seconds = toTime.seconds + 60 - fromTime.seconds;
		}
		else
		{
			if (toTime.hour >= 1)
			{
				toTime.hour -= 1;	
			}
			else
			{
				toTime.hour = toTime.hour + 24 - 1;
			}
			
			toTime.seconds = toTime.seconds + 60 - fromTime.seconds;
			toTime.minutes = toTime.minutes + 60 - fromTime.minutes - 1;
		}
	}

	// calculate minutes
	if ( toTime.minutes >= fromTime.minutes)
	{
		toTime.minutes -= fromTime.minutes;
	}
	else
	{
		if ( toTime.hour >= 1)
		{
			toTime.hour -= 1;
			toTime.minutes = toTime.minutes + 60 - fromTime.minutes;
		}
		else
		{
			toTime.hour = toTime.hour + 24 - 1;
			toTime.minutes = toTime.minutes + 60 - fromTime.minutes;
		}
	}

	// calculate hour
	if ( toTime.hour >= fromTime.hour )
	{
		toTime.hour -= fromTime.hour;
	}
	else
	{
		toTime.hour = toTime.hour + 24 - fromTime.hour;
	}

	return toTime;
}
