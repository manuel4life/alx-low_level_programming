#include "main.h"

/**
 * _strlen_recursion - a function that returns the length
 * @s: the string input
 * Return: string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
