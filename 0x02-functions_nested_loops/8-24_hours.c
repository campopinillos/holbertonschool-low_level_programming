#include "holberton.h"
/**
 * jack_bauer - Prints every minute of the day
 * @void: The evaluated input
 *
 * Description: Prints every minute of the day of Jack Bauer, from 00:00to23:59
 * Return: 0 Value if it works
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes % 10 + '0');
			_putchar('\n');
		}
	}
}
