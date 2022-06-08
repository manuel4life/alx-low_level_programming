#include "main.h"

/**
 * print_to_98 - print natural numbers from n t0 98
 * @n: starting input
 * Return: 0 Always
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = 0; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
