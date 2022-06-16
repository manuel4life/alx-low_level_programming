#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array
 * @a: first input
 * @n: second input
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int k, i;

	for (k = 0; k < n; k++)
	{
		n--;
		i = a[k];
		a[k] = a[n];
		a[n] = i;
	}
}
