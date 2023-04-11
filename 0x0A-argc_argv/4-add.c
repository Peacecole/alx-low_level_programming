#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - passing argv
 * @argc: number of arguments
 * @argv: displays the arguments passed to a program
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int count, sum = 0;
	unsigned int y;
	char *x;

	(void) argc;
	if (argc > 1)
	{

		for (count = 1; count < argc; count++)
	{

		x = argv[count];

		for (y = 0; y < strlen(x); y++)
		{

			if (x[y] < 48 || x[y] > 57)
			{

				printf("Error\n");

				return (1);
			}
		}

		sum += atoi(x);
		x++;
		}

		printf("%d\n", sum);
	}

	else
	{
		printf("0\n");
	}

	return (0);
}
