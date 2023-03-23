#include "main.h"
/**
 * _isupper - Return 1 if letter is uppercase and 0 if not.
 * @upper: char type letter
 * Return: 1 if uppercase, 0 if not uppercase
 */
int _isupper(int upper)
{
	if (upper > 64 && upper < 91)
		return (1);
	else
		return (0);
}
