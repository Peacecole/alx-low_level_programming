#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_buffer - a buffer memory of 1024 bytes
 * @file: pointer to the file being stored in the buffer
 * Return:  pointer to the buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - closes up the file
 * @d: pointer to the file to be closed
 * Return: nothing
 */
void close_file(int d)
{
	int x;

	x = close(d);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close d %d\n", d);
		exit(100);
	}
}

/**
 * main - copies the content of one file to another
 * @argc: number of arguments to the program
 * @argv: ponters to the argumnets passed to the program
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int fr, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	fr = open(argv[1], O_RDONLY);
	r = read(fr, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fr == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(fr, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buffer);
	close_file(fr);
	close_file(to);

	return (0);

}
