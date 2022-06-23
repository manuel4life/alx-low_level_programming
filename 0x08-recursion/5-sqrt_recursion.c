#include "main.h"
int perfectSquare(int n, int j);
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
 * @k: input
 * @j: counter input
 * Return: square root
 */

int perfectSquare(int n, int j)
{
	if (j < 1)
		return (-1);
	else if (j * j == n)
		return (j);
	else
		return (perfectSquare(n, j - 1));
}
