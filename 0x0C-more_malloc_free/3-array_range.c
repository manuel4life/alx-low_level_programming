#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array
 * @min: minimum number
 * @max: maximum number
 * Return: NULL
 */

int *array_range(int min, int max)
{
	int *ar;
	int k;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (k = 0; min <= max; k++, min++)
		ar[k] = min;

	return (ar);
}
