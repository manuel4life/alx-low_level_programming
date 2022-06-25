#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: value
 * Return: 0 Always
 */

int main(int argc, char *argv[]  __attribute__((unused)))
{

	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
