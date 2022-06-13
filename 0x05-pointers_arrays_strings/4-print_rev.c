#include "main.h"

/**
 * print_rev - a function that prints strings in reverse
 * @s: the string input
 * Return: Always 0
 */

void print_rev(char *s)
{
	int k = 0;

	while (*(s + k))
		k++;
	k = k - 1;

	while (k >= 0)
	{
		_putchar(*(s + k));
		k--;
	}
	_putchar('\n');
}
