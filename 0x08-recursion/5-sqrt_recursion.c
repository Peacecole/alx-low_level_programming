#include "main.h"
#include <stdio.h>
/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @x: integer number
 * @y: looping number
 *
 * Return: always 0
 */
int sqrt2(int x, int y)
{

	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);

	return (sqrt2(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: another integer number
 * Return: always 0
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
