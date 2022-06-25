#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: the string to be comverted.
 *
 *Return: The integer value of the comverted string.
 */

int _atoi(char *s)
{
	int y = 1;
	unsigned int n = 0;

	do {					
	if (*s == '-')
											y *= -1;

	else if (*s >= '0' && *s <= '9')
											n = (n * 10) + (*s - '0');
					
	else if (n > 0)
	break;
	}
	while (*s++);
		return (n * y);
}
