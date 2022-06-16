#include "main.h"

/**
 * leet - a function that encodes
 * @n: string
 * Return: Always 0
 */

char *leet(char *n)
{
	int k;
	int j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (k = 0; n[k] != '\0'; k++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[k] == s1[j])
			{
				n[k] = s2[j];
			}
		}
	}
	return (n);
}

