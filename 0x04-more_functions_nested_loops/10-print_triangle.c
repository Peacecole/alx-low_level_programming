#include "main.h"
/**
 * print_triangle - print a triangle
 *
 * @size_c: The charater to print
 */
void print_triangle(int size_c)
{

	int row, col;

	if (size_c > 0)
	{

		for (row = 1; row <= size_c; row++)
		{

			for (col = size_c - row; col > 0; col--)
				_putchar(' ');

			for (col = 0; col < row; col++)
				_putchar('#');

			if (row == size_c)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
