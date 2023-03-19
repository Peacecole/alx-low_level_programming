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

	while
		(c <= 'z') {
		if ((c != 'q' && c != 'e') && c <= 'z')
			putchar(c);
	}
	printf("c\n");
	return (0);
}
