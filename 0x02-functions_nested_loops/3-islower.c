#include "main.h"
/**
 * _islower - let's check for lowercase character
 * @c:letter input
 * Return: 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

