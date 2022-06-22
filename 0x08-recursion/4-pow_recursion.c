#include "main.h"

/**
 * _pow_recursion - a function that returns a value
 * raised to the power of another.
 * @x:first input
 * @y:second input
 * Return: value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
		return (x * _pow_recursion(x, y - 1));
}
