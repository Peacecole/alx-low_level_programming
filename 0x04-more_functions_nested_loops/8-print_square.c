#include "main.h"
/**
 * print_square - print square of 2 and 10 with '#'
 * @size_c: The character to print
 * Return: squars
 */
void print_square(int size_c)
{

	int l1, l2;

	for (l1 = 0; l1 < size_c; l1++)
	{

		for (l2 = 0; l2 < size_c; l2++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}

	if (size_c <= 0)
		_putchar('\n');
}
