#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: value
 * Return: 0 Always
 */

int main(int argc, __attribute__((unused)) char *argv[])
{

	if (argc > 0)
		prinf("%d\n", argc - 1);
	return (0);
}
