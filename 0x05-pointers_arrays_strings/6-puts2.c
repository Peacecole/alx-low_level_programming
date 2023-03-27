#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints out every character of a string
 * @str: the string whose charactersare to be printed
 * Retun: always void
 */
void puts2(char *str)
{
	int x;
	int y = 0;

	while (str[y] != '\0')
	{
		y++;
	}

	for (x = 0; x < y; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
