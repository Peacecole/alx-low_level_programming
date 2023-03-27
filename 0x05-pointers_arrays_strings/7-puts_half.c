#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a given string
 * @str: the string to be printed
 * Return always void
 */
void puts_half(char *str)
{
	int j = 0;
	int n;

	while (str[j] != '\0')
	{
		j++;
	}

	if (j % 2 == 1)
	{
		n = (j - 1) / 2;
		n += 1;
	}
	else
	{
		n = j / 2;
	}

	for (; n < j; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
