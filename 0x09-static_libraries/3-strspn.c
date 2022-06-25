#include "main.h"

/**
 * _strspn - search for set of bytes in a string
 * @s: checking string
 * @accept: string for checking
 * Return: the bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length;
	int i;
	int k;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
											for (k = 0; accept[k] != '\0' && accept[k] != s[i]; k++)
															;
											if (s[i] == accept[k])
											length++;
											if (accept[k] == '\0')		
											return (length);										}
	return (length);
}
