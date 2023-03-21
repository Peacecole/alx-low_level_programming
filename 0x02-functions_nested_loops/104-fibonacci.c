#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - main entry point
 * Finding and printing the first 98 fib numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return: always 0
 */
int main(void)
{
	unsigned long int num1 = 0, num2 = 1, num3 = 0, num4 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", num2, num4);
	for (count = 2; count < 98; count++)
	{
		if (num2 + num4 > LARGEST || num3 > 0 || num1 > 0)
		{
			hold1 = (num2 + num4) / LARGEST;
			hold2 = (num2 + num4) % LARGEST;
			hold3 = num1 + num3 + hold1;
			num1 = num3, num3 = hold3;
			num2 = num4, num4 = hold2;
			printf("%lu%010lu", num3, num4);
		}
		else
		{
			hold2 = num2 + num4;
			num2 = num4, num4 = hold2;
			printf("%lu", num4);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
