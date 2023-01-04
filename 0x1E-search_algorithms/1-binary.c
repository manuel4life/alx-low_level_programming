#include "search_algos.h"
/**
 * binary_search - searches for values in a sorted array
 * @array: int array parsed
 * @size: size_t size of array
 * @value: int target value
 * Return: index of value location or -1 if array null
 * or value not in array
 */

int binary_search(int *array, size_t size, int value)
{
	int left, right, i, mid;

	left = 0;
	right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return (-1);
}
