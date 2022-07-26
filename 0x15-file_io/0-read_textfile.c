#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX stdout.
 *@letters: number of bytes
 *@filename: file descriptor
 *
 * Return: letters;
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, size, output;
char *rd;

rd = (char *)malloc(sizeof(char) * letters);

/*opening file*/

fd = open(filename, O_RDONLY);

if (fd == -1 || filename == NULL || rd == NULL)
{
free(rd);
return (0);
}
/*read file*/
size = read(fd, rd, letters);
if (size == -1)
{
return (0);
}
rd[size] = '\0';
/*write to out*/
output = write(STDOUT_FILENO, rd, size);
close(fd);
return (output);
}
