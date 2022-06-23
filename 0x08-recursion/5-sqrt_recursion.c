#include "main.h"
int perfectSquare(int n, int i);
/**
 * _sqrt_recursion - a function that returns a natural
 * square root of a number
 * @n: integer input
 * Return: square
 */

int _sqrt_recursion(int n)
{
		if (n < 0)
			return (-1);
	else
		return (perfectSquare(n, (n + 1) / 2));
}
/**
 * perfectSquare - checks for perfect Square
 * @n: input
 * @i: counter input
 * Return: square root
 */

int perfectSquare(int n, int i)
{
		if (i < 1)
			return (-1);
	else if (i * i == n)

		return (i);
	else
		return (perfectSquare(n, i - 1));
}
