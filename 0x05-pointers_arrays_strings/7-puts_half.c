#include "main.h"

/**
 * puts_half - a function that print half string
 * @str: string input
 * Return: 0 Always
 */

void puts_half(char *str)
{
	int k;
	int n;

	n = 0;

	while (*(str + n))
		n++;
	k = n / 2;
	if (n % 2)
		k += 1;
	while (k < n)
	{
		_putchar(*(str + k));
		k++;
	}
	_putchar('\n');
}
