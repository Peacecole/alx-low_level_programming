#include <stdio.h>
/**
 * main - entry point
 * A program that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
