#include "main.h"

/**
 * get_bit - Returns the value of a bit.
 * @n: character
 * @index: index
 *
 * Return: number at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	return ((n >> index) & 1);
}
