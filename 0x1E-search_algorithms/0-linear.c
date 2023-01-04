#include "search_algos.h"
/**
 * linear_search - searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: int array parsed
 * @size: size_t size of array
 * @value: int target value
 * Return: first index where value is located
 * or return -1 if not present
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; (size_t)i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i,  array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
