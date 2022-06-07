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
	int i;


	for (i = 0; i <= 8; i++)
	{
		_putchar(name[i]);
	}
	return (0);
}
