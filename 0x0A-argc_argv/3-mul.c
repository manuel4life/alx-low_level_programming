#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: value
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, val = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; i < argc; i++)
	{
		val *= atoi(argv[i]);
	}
	printf("%d\n", val);
	return (0);
}
