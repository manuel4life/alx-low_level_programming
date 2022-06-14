#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints element
 * @a: first integer
 * @n: second integer
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int k = 0;

	while (k < n)
	{
		printf("%d", a[k]);
		if (k < (n - 1))
			printf(", ");
		k++;
	}
	printf("\n");
}
