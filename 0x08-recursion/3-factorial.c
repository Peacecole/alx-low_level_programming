#include "main.h"
#include <stdio.h>
/**
 * factorial - function that returns factorial
 * of a given number
 * @n: number whose factorial is to be ruturned
 * Return: always 0
 */
int factorial(int n)
{
	int x = 1, i = 1;

	while (i <= n)
	{
		x = x * i;
		i++;
	}
	return (x);
}
