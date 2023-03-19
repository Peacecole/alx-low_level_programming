#include <stdio.h>
/**
 * main - entry point
 * a c program that prints all the alphabets except e and q
 * Return: always 0
 */
int main(void)
{
	char low, e, q;

	e = 'e';

	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
			putchar(low);
	}
	putchar('\n');
	return (0);
}
