#include "main.h"

/**
 * jack_bauer - function that prints minutes of the day
 * hour,m - minutes
 * and rests minutes
 * Return: 0 Always
 */

void jack_bauer(void)
{
	int min;
	int hour;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n')
		}
	}
}
