#include "main.h"
/**
 * create_file - creates a file
 * @filename: pointer to the name of the file to be created
 * @text_content: pointer NULL terminated string to write to the file
 * Return: 1 when successful, -1 when not successful
 */
int create_file(const char *filename, char *text_content)
{
	int x, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; )
			len++;
	}

	x = open(filename, O_CREAT | O_TRUNC, 600);
	w = write(x, text_content, len);

	if (x == -1 || w == -1)
		return (-1);

	close(x);

	return (1);
}
