#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times
 *
 * Return: 10
 */

void print_alphabet_x10(void)
{
	int i, count;

	count = 0;

	while (count < 10)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
		count++;
		_putchar('\n');
	}
}
