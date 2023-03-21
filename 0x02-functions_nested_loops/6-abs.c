#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 * @num: int type number
 * Return: absolute value of @num
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (num * -1);
	}
	else
	{
		return (num);
	}
}
