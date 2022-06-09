#include <stdio.h>

/**
 * main - to print fizz buzz
 *
 * Return: 0 Always
 */

int main(void)
{
	int count = 1;
	int dest = 100;

	while (count <= dest)
	{
		if (count % 3 == 0 && count % 5 == 0)
		{
			printf("Fizzbuzz ");
		}
		else if (count % 3 == 0)
		{
			printf("Fizz ");
		}
		else if ( count % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", count);
		}
		count++;
	}
	return (0);
}
