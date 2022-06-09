#include "main.h"

/**
 * print_numbers - a function that prints numbers from 0 - 9
 *_putchar - prints character
 * Return: 0
 */

void print_numbers(void)
{
	char c = '0';

	while (c <= 9)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
