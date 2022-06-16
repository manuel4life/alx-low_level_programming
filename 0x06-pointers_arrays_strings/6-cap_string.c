#include "main.h"

/**
 * cap_string - a string that capitalize
 * @n: string
 * Return: Always 0
 */

char *cap_string(char *n)
{
	int k;
	int j;
	int count = 32;
	int seperate[] = {',', ';', '.', '?', '"',
		'(', ')', '{', '}', ' ', '\n', '\t'};

	for (k = 0; n[k] != '\0'; k++)
	{
		if (n[k] >= 'a' && n[k] <= 'z')
		{
			n[k] = n[k] - count;
		}
		count = 0;
		for (j = 0; j <= 12; j++)
		{
			if (n[k] == seperate[j])
			{
				j = 12;
				count = 32;
			}
		}
	}
	return (n);
}
