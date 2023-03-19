#include <stdio.h>
/**
 * main - entry point
 * a program that prints the lowercase alphabet in reverse
 * Return: always 0
 */
int main(void)
{
	char alp[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');

	return (0);
}
