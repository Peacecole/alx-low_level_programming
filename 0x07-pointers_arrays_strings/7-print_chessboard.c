#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints out a chessboard
 *
 * @a: chessboard to print
 *
 * Return: always void
 */
void print_chessboard(char (*a)[8])
{

	int x, y = 0;

	while (y < 8)
	{

		x = 0;

		while (x < 8)
		{
			_putchar(a[y][x++]);
		}
			_putchar('\n');
			y++;
	}
}
