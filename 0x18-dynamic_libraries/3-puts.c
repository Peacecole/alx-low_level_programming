#include "main.h"
#include <stdio.h>
/**
 * _puts - prints out a string
 * @str: the string to be printed out
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
