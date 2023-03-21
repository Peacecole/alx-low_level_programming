#include "main.h"
/**
 * print_sign - Print the sign of a number
 * @num: type int integer, can be negative or positive
 * Description: print + for positive, 0 for a zero and - for negative
 * Return: 1 if positive, 0 if zero and -1 if negative
 */
int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
