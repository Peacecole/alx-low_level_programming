#include "main.h"
#include <stdio.h>
/**
 * main - passing argc
 * @argc: nnumber of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
