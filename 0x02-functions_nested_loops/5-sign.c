#include "main.h"
/**
 *print_sign - function to print the sing of a number
 *@n: number input
 * Return: O Always
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
