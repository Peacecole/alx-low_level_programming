#include "main.h"
#include <stdio.h>
/**
 * swap_int - swapping the values of two integers
 * @a: pointer
 * @b: pointer
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
