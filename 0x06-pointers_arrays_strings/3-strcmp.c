#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @f_string: first string.
 * @s_string: second string.
 * Return: 0 if f_string and s_string are equals,
 * another number if not.
 */
int _strcmp(char *f_string, char *s_string)
{

	int i = 0, c_string = 0;

	while (c_string == 0)
	{

		if ((*(f_string + i) == '\0') && (*(s_string + i) == '\0'))
			break;

		c_string = *(f_string + i) - *(s_string + i);
		i++;
	}

	return (c_string);
}
