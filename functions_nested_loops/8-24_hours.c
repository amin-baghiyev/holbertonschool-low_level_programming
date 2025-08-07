#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	short hour, minute;

	hour = 0;
	minute = 0;
	while (hour <= 23 && minute <= 59)
	{
		if (hour <= 9)
			printf("0%d:", hour);
		else
			printf("%d:", hour);

		if (minute <= 9)
			printf("0%d\n", minute);
		else
			printf("%d\n", minute);

		if (minute == 59 && hour != 23)
		{
			minute = -1;
			hour++;
		}
		minute++;
	}
}
