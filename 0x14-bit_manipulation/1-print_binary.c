#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: pointer to the number to be printed in binary
 * Return: binary number
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current_num;

	for (i = 63; i >= 0; i--)
	{
		current_num = n >> i;

		if (current_num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}

	if (!count)
		_putchar('0');
}
