#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char alp;

	while (i < 10)
	{
		alp = 'a';
		while (alp <= 'z')
		{
			_putchar(alp);
			alp++;
		}
		_putchar('\n');
		i++;
	}
}
