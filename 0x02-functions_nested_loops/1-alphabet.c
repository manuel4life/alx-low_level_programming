#include "main.h"

/**
 * print_alphabet - a fucntion that prints the alphabet in lowercase
 *
 * Return: 0 Always (Success)
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
