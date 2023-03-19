#include <stdio.h>
/**
 * main - entry point
 * Write a program that prints all possible combinations
 * of single-digit numbers
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
