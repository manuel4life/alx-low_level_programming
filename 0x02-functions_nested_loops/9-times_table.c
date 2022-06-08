#include "main.h"

/**
 * times_table - function  count table 9 time from 0
 * row = row ,col = column
 * Return: times table
 */

void times_table(void);
{
	int i;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			int table = k * i;

			if (k == 0)
			{
				_putchar('0');
			}
			else if (table <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(table + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(table / 10 + '0');
				_putchar(table % 10 + '0');
			}
		}
	}
}
