#include "main.h"

/**
 * more_numbers - a function that prints  numbers 14 times
 *
 * Ruturn: Always 0
 */

void more_numbers(void)
{
	int i;
	int k;

	for (k = 0; k <= 9; k++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
