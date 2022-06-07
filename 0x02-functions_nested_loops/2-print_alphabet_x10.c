#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times 
 *
 * Return: 10
 */

void print_alphabet_x10(void)
{
	int i,count;

	count = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);

		for (count < 10; count++;)
		{
		_putchar ('\n');
		}
	}
}
