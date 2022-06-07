#include <unistd.h>

/**
 * _putchar - writes the charracter c to stdout
 * @c: The character to print
 * Return: on the 1
 * On error, -1 returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
