#include "main.h"

/**
 * print_square - function that prints square
 * @size: input
 * Return: Always 0
 */

void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		for (b = 0; a < size; b++)
			_putchar('#');
		_putchar('\n');
	}
}
