#include <stdio.h>

/**
 * main - main entry point
 * Printing the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: always 0
 */
int main(void)
{
	int count = 2;
	long int num1 = 1, num2 = 2;
	long int num3;

	printf("%lu, ", num1);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", num2);
		}
		else
		{
			printf("%lu, ", num2);
		}

		num3 = num2;
		num2 += num1;
		num1 = num3;
		count++;
	}

	return (0);
}
