#include "main.h"
#include <stdio.h>
/**
 * main - passing argv
 * @argc: number of arguments
 * @argv: displays the arguments passed to a program
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int count;

	(void) argc;

	for (count = 0; count < argc; count++)
	{	

		printf("%s\n", argv[count]);
	}

	return (0);
}
