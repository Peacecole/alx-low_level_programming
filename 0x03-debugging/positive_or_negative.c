#include "main.h"
/**
 * positive_or_negative - prints whether a number is negative or
 * positive
 * @i: integer data type
 * Return: either negative or positive
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);

	else if (i < 0)
		printf("%d is negative\n", i);

	else
		printf("%d is zero\n", i);
}
