#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - a function that raises x to the power of y
 * @x: interger number
 * @y: power of x
 * Return: x raised to a power.
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
