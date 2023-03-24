#include "main.h"
/**
 * print_diagonal - print diagonal
 * @num: Times to print
 * Return: display diagonal
 */
void print_diagonal(int num)
{

	int l1, l2;

	for (l1 = 0; l1 < num; l1++)
	{

		for (l2 = 0; l2 < l1; l2++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}

	if (num <= 0)
		_putchar('\n');
}
