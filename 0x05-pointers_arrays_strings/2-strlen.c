#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: string char input
 * Return: 0 Always
 */

int _strlen(char *s)
{
	int k = 0;

	while (*(s + 1))
	k++;
	return (k);
}
