#include "main.h"

/**
 * string_toupper - a function that prints  uppercase
 * @n: string
 * Return: Always 0
 */

char *string_toupper(char *n)
{
	int k;

	for (k = 0; n[k] != '\0'; k++)
	{
		if (n[k] >= 'a' && n[k] <= 'z')
			n[k] = n[k] - 32;
	}
	return (n);
}
