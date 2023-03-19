#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		if ((c != 'q' && c != 'e') && c <= 'z')
			putchar(c);
			c++;
	}
	printf("\n");
	return (0);
}

