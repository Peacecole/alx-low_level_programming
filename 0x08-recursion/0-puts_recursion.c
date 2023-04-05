#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - recursive function
 * @s: pointer to the strin to be printed
 * Return: strings
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
