#include "main.h"
int perfectSquare(int k, int j);
/**
 * _sqrt_recursion - a function that checks the squareroot
 * @n: input
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
		if (n < 0)
			return (-1);
		else
			return (perfectSquare(n, (n + 1) / 2));
}
/**
 * perfectSquare - function to check the perfect square
 * @k: input
 * @j: input
 * Return: square root
 */
int perfectSquare(int k, int j)
{
		if (j < 1)
			return (-1);
		else if (j * j == k)
			return (j);
		else
			return (perfectSquare(k, j - 1));
}
