#include "main.h"
/**
 * print_line - print line
 * @num: The character to print
 * Return: displays line
 */
void print_line(int num)
{

	int line;

	if (num > 0)
	{

		for (line = 0; line < num; line++)
			_putchar('_');
	}
	_putchar('\n');
}
