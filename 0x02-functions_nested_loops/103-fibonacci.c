#include <stdio.h>

/**
 * main - main entry point
 * Printing the sum of even Fibonacci numbers up to a fib value
 * not exceeding 4,000,000.
 * Return: always 0
 */
int main(void)
{
	int num1 = 1, num2 = 2, sum = 0;
	int num3;

	while (num2 < 4000000)
	{
		if (num2 % 2 == 0)
			sum += num2;

		num3 = num2;
		num2 += num1;
		num1 = num3;
	}
	printf("%d\n", sum);
	return (0);
}
