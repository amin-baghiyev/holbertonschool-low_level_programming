#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	short f_hour, s_hour, f_minute, s_minute;

	f_hour = 0;
	s_hour = 0;
	f_minute = 0;
	s_minute = 0;
	while (!(f_hour == 2 && s_hour == 4))
	{
		_putchar(48 + f_hour);
		_putchar(48 + s_hour);
		_putchar(':');
		_putchar(48 + f_minute);
		_putchar(48 + s_minute);
		_putchar('\n');

		if (s_hour == 9 && f_minute == 5 && s_minute == 9)
		{
			f_hour++;
			s_hour = -1;
		}
		s_minute++;
		if (s_minute == 10)
		{
			s_minute = 0;
			f_minute++;
		}
		if (f_minute == 6)
		{
			s_hour++;
			f_minute = 0;
		}
	}
}
