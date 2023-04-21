#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all the argument parameters
 * @num: number of parameters to be passed in the function
 * @...: ellipsis representing variable number
 * Return: 0 when n==0, otherwise, all parameters
 */
int sum_them_all(const unsigned int num, ...)
{
	va_list ap;
	unsigned int x, sum = 0;

	va_start(ap, num);

	for (x = 0; x < num; x++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
