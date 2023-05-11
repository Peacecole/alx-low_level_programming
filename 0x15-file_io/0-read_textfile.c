#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX STDOUT
 * @filename: name of the file to be evaluated
 * @letters: the size of the file to be evaluated
 * Return: integer value for number or bytes, 0 not successful
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *temp;
	ssize_t op;
	ssize_t w;
	ssize_t r;

	op = open(filename, O_RDONLY);

	if (op == -1)
		return (0);

	temp = malloc(sizeof(char) * letters);
	r = read(op, temp, letters);
	w = write(STDOUT_FILENO, temp, r);

	free(temp);
	close(op);

	return (w);
}
