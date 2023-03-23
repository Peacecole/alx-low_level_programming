#include "main.h"
/**
 * print_times_table - Printing the `n` times table, starting with 0.
 * If `n` is greater than 15 or less than 0, print nothing.
 * @num: int type number
 */
void print_times_table(int n)
{
	int i;
	int x = 0;
	int y;

	if (n > 15 || n < 0)
		return;

	while (x <= n)
	{
		for (i = 0; i <= n; i++)
		{
			y = x * i;

			if (y > 99)
			{
				_putchar(y / 100 + '0');
				_putchar((y / 10 % 10) + '0');
				_putchar(y % 10 + '0');
			}
			else if (y > 9)
			{
				_putchar(' ');
				_putchar(y / 10 + '0');
				_putchar(y % 10 + '0');
			}
			else if (i != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(y + '0');
			}
			else
				_putchar(y + '0');

			if (i != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		x++;
	}
}
