#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that adds two numbers
 * @argc: counter
 * @argv: values
 * Return: Always 0
 */

int main(int argc, char *argv)
{
	int i = 1, sum = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
