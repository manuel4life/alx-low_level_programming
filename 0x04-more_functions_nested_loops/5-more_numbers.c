#include "main.h"

/**
 * more_numbers - a function that prints  numbers 14 times
 *
 * Ruturn: Always 0
 */

void more_numbers(void)
{
	int i = 0;
	int k;

	while (i < 10)
	{
		int k = 0;

		while (k <= 14)
		{
			_putchar((i / 10) + '0');

		}
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
