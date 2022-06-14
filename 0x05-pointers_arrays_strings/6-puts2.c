#include "main.h"

/**
 * puts2 - a function that prints other character
 *  @str: string input
 *  Return: 0 Always
 */

void puts2(char *str)
{
	int k;
	int j;

	j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (k = 0; k < j; k += 2)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
