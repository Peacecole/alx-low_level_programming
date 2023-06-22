#include "main.h"
/**
 * _islower - Return 1 if letter is lowercase and 0 if not.
 * @lower: char type letter
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int lower)
{
	if (lower > 96 && lower < 123)
		return (1);
	else
		return (0);
}
