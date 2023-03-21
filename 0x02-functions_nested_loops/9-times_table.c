#include "main.h"
/**
 * times_table - Printing the 9 times table, starting with 0
 * Return: always 0
 */
void times_table(void)
{
	int i;
	int x = 0;
	int y;

	while (x < 10)
	{
		i = 0;
		while (i < 10)
		{
			y = x * i;

			if (y > 9)
			{
				_putchar(y / 10 + '0');
				_putchar(y % 10 + '0');
			}
			else if (i != 0)
			{
				_putchar(' ');
				_putchar(y + '0');
			}
			else
			{
				_putchar(y + '0');
			}

			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			i++;
		}
		_putchar('\n');
		x++;
	}
}
