#include "main.h"
/**
 * print_last_digit - function to print the last number of an integer
 * @lst: input integer
 * Return: last value of lst
 */

int print_last_digit(int lst)
{
	int i;

	i = (lst % 10);

	if (i < 0)
	{
		i = (-1 * i);
	}
	_puchar(i + '0');
	return (i);
}
