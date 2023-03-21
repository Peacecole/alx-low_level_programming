#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @num: int type number
 * Return: return value of last digit
 */
int print_last_digit(int num)
{
	int num_v;

	if (num < 0)
	{
		num_v = -1 * (num % 10);
		_putchar(num_v + '0');
		return (num_v);
	}
	else
	{
		num_v = num % 10;
		_putchar(num_v + '0');
		return (num_v);
	}
}
