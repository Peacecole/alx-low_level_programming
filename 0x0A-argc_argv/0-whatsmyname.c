#include "main.h"
#include <stdio.h>
/**
 * main - passing argc and argv
 * @argc: nnumber of arguments
 * @argv: array of strings passed to th commandline
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
