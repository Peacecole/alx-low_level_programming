#include "main.h"
#include <stdio.h>
/**
 * prime2 - evaluates 1 to n numbers
 * @x: integer number
 * @y: looping number
 * Return: always 0
 */
int prime2(int x, int y)
{

	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);

	return (prime2(x, y + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: integer number
 * Return: always 0
 */
int is_prime_number(int n)
{

	if (n <= 1)
		return (0);

	return (prime2(n, 2));
}
