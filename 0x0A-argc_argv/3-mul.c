#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - passing argv
 * @argc: number of arguments
 * @argv: displays the arguments passed to a program
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	(void) argc;

	if (argc == 3)
	{

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}

	else
	{

		printf("Error\n");
		return (1);
	}

	return (0);
}
