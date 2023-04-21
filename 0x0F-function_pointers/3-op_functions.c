#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds integers
 * @a: first integre
 * @b: second integer
 * Return: integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts integers
 * @a: first integre
 * @b: second integer
 * Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies  integers
 * @a: first integre
 * @b: second integer
 * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - adds integers
 * @a: first integre
 * @b: second integer
 * Return: integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - gives modulus of two integers
 * @a: first integre
 * @b: second integer
 * Return: reminder of division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

