#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prits given strings
 * @sepa: separator to the strings to be printed
 * @num: number of strings to be printed
 * Return: strings
 */
void print_strings(const char *sepa, const unsigned int num, ...)
{
	va_list strings;
	char *str;
	unsigned int i;

	va_start(strings, num);

	for (i = 0; i < num; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (num - 1) && sepa != NULL)
			printf("%s", sepa);
	}

	printf("\n");

	va_end(strings);
}
