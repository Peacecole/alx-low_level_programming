#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoder function
 * @s: pointer to string
 * Return: pointer
 */
char *rot13(char *s)
{
	int i, j;
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alph2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alph[j])
			{
				s[i] = alph2[j];
				break;
			}
		}
	}
	return (s);
}
