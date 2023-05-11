#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name of the file to be amended
 * @text_content: string to be added to the file
 * Return: -1 NULL or fail 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; )
			len++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	w = write(x, text_content, len);

	if (x == -1 || w == -1)
		return (-1);

	close(x);

	return (1);
}
