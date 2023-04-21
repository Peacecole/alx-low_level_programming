#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers
 * @sepa: string that separates numbers to be printed
 * @num: number of integers passed to the function
 * @...: ellipsis rep number of arguments to be passed
 * Return: always 0
 */
void print_numbers(const char *sepa, const unsigned int num, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, num);

	for (i = 0; i < num; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i != (num - 1) && sepa != NULL)
			printf("%s", sepa);
	}

	printf("\n");

	va_end(nums);
}

