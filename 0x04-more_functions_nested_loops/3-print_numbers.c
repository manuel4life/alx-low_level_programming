#include "main.h"

/**
 * print_numbers - a function that prints numbers from 0 - 9
 *_putchar - prints character
 * Return: 0
 */

void print_numbers(void)
{
	char c;

	for (c = '0' ; c <= '9'; c++)
	{
		_putchar (c);
	}
	_putchar('\n');
}
