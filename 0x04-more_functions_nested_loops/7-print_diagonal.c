#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line
 * @n: input
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int k;
	int a;

	if (n <= 0)
		_putchar('\n');
	for (k = 0; k < n; k++)
	{
		for (a = 0; a <= k; a++)
		{
			if (k == a)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
