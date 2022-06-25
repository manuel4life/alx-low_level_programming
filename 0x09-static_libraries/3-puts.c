#include "main.h"

/**
 * _puts - function that prints a string
 * @str: - string input
 * Return: Always 0
 */

void _puts(char *str)
{
	int n = 0;

	while (*(str + n))
					{
	_putchar(*(str + n));
											n++;										}
	_putchar('\n');
}
