#include "main.h"

/**
 * _strpbrk - a funtion that locates a substring
 * @s: string input
 * @accept: second string
 * Return: 0 Always
 */

char *_strpbrk(char *s, char *accept)
{
	int i, k;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
						{
	for (k = 0; accept[k] != '\0'; k++)
	{
	if (accept[k] == s[i])
	{
																							p = &s[i];
																							return (p);																									}
	}
	}
	return (0);
}

