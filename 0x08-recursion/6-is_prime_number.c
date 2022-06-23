#include "main.h"
int primeNumber(int k, int j);
/**
 * is_prime_number - a function to that returns 1
 * @n: integer input
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (primeNumber(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
 * primeNumber - checks for prime
 * @k: input
 * @j: input
 * Return: prime check
 */
int primeNumber(int k, int j)
{
	if (j == 1)
		return (1);
	if (k % j == 0)
		return (0);
	else
		return (primeNumber(k, j - 1));
}
