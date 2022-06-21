#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that calculate the diagonal of a square
 * @a: first input
 * @size: the size
 * Return: Always 0
 */

oid print_diagsums(int *a, int size)
{
	int i;
	int tl = 0;
	int tr = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		tl += a[i];
	}
	for (i = size - 1; i < s - 1; i += size - 1)
	{
		tr += a[i];
	}
	printf("%d, %d\n", tl, tr);
}
