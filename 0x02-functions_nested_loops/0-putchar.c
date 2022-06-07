#include "main.h"

/**
 * main - Entry point
 *
 * Return:  0 Always
 *
 */

int main(void)
{
	char name[5] = {'k', 'o', 'f', 'i'};
	int i;


	for (i = 0; i <= 5; i++)
	{
		_putchar(name[i]);
		_putchar(' ');
	}
	return (0);
}
