#include "main.h"
/**
 * jack_bauer - prints all the minutes of the day in 24hr format
 *
 */
void jack_bauer(void)
{
	int minute, hour;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar(hour);
			_putchar(':');
			_putchar(minute);
			_putchar('\n');
		}
	}
}
