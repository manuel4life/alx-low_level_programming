#include "main.h"

/**
 * _isalpha - function that will check for letters in upper or lowercase
 * @c: letter input
 * Return: 1
 */

int _isalpha(int c)
{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
				{
						return (1);
							}
			else
					return (0);
}

