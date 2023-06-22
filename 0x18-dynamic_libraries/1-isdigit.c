#include "main.h"
/**
 * _isdigit - Return 1 if number and 0 if otherwise.
 * @num: integer type letter
 * Return: 1 if number, 0 if not number
 */
int _isdigit(int num)
{
	if (num > 47 && num < 58)
		return (1);
	else
		return (0);
}
