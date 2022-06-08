#include "main.h"

/**
 * main - Entry point
 *
 * Return:  0 Always
 *
 */

int main(void)
{
		char name[] = "_putchar";

		unsigned int i;


		for (i = 0; i < sizeof(name); i++)
		{

		_putchar(name[i]);

		}

		_putchar('\n');

		return (0);
}
