#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * word_len - index making th end of the first
 * word contained within a string
 * @str: pointer to the string to be searched
 * Return: index of the end of the word pointed by str
 */
int word_len(char *str)
{
	int i = 0, length = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		length++;
		i++;
	}

	return (length);
}

/**
 * count_words - counts the number of words
 * @str: string to be searched
 * Return: number of words
 */
int count_words(char *str)
{
	int i = 0, words = 0, length = 0;

	for (i = 0; *(str + i); i++)
		length++;

	for (i = 0; i < length; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += word_len(str + i);
		}
	}

	return (words);
}

/**
 * strtow - splits a string into words
 * @str: string to be splitted
 * Return: NULL, fail or pointer
 */
char **strtow(char *str)
{
	char **s;
	int i = 0, words, x, letters, y;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);

	if (words == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);

	for (x = 0; x < words; x++)
	{
		while (str[i] == ' ')
			i++;
		letters = word_len(str + i);
		s[x] = malloc(sizeof(char) * (letters + 1));

		if (s[x] == NULL)
		{
			for (; x >= 0; x--)
				free(s[x]);
			free(s);
			return (NULL);
		}
		for (y = 0; y < letters; y++)
			s[x][y] = str[i++];
		s[x][y] = '\0';
	}
	s[x] = NULL;
	return (s);
}
