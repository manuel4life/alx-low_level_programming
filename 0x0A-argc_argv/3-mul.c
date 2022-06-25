#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: value
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
	int product;

	if (argc == 3)
	{
		product = (atoi(argv[i]) * atoi(argv[2]));
		printf("%d\n", product);
	}
	else
	{
		prtinf("Error\n");
		return (1);
	}
	return (0);
}
