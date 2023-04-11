#include "main.h"
#include <stdio.h>
/**
 * main - passing argc
 * @argc: number of arguments
 * @argv: displays the arguments passed to a program
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
