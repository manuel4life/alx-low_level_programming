#include "main.h"

/**
 * print_numbers - a function that prints numbers from 0 - 9
 *_putchar - prints character
 * Return: 0
 */

void print_numbers(void)
{
	char a = '0';

	while (a <= 9)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
