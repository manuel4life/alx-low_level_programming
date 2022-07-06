#include "function_pointers.h"

/**
 * int_index - a function that searches for integers
 * @array: integer input array
 * @size: size of the array
 * @cmp: pointr to the function
 *
 * Return: index of the first element if the cmp function
 * does not return 0.or no elements matches
 * if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (k = 0; k < size; k++)
			if (cmp(array[k]))
				return (k);
	}
	return (-1);
}
