#include "main.h"

/**
 * swap_int - a function that swap the value of two intergers
 * @a: first integer
 * @b: second integer
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*b = *a;
	*b = i;
}
