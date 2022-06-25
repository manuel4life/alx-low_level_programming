#include "main.h"

/**
 * main - function that adds two numbers
 * @argc: counter
 * @argv: values
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i = 1, sum = 0;

	if (argc > 1)
	{
		for (; i < argc; i++)
		{
			if (checker(argv[i]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * checker - checks if it's letter
 * @c: chartacter input
 * Return: 0 if found in range 1 if not
 */

int checker(char *c)
{
	while (*c)
	{
		if ((*c >= 65 && *c <= 90 || (*c >= 97 && *c <= 122))
				return (0);
				c++;
	}
	return (1);
}
