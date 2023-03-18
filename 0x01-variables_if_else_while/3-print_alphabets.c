#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char ALP[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int m, n;

	for (m = 0; m < 26; m++)
	{
		putchar(alp[m]);
	}
	for (n = 0; n < 26; n++)
	{
		putchar(ALP[n]);
	}
	putchar('\n');

	return (0);
}

