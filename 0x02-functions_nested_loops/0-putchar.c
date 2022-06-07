#include "main.h"

/**
 * main - Entry point
 *
 * Return:  0 Always
 *
 */

int main(void)
{
	char name[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (int c = 0; c <= 8; c++)
	{
		_putchar(name[c]);
	}
	_putchar('\n');
	return (0);
}
