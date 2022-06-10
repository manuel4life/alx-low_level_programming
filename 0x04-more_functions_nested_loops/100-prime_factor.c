#include <stdio.h>

/**
 *  main - Entry point
 * Description: Finds the highest prime factor of a number
 * Return: Always 0.
 */

int main(void)
{
	long k, number = 612852475143;

	for (k  = 2; k <= number; k++)
	{
	if (number % k == 0)
	{
	number = number / k;
	k--;
	}
	}
	printf("%lu\n", k);
	return (0);
}
