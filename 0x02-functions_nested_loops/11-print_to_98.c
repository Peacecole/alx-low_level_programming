#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Printing natural numbers from n to 98
 * @num: int type number
 */
void print_to_98(int num)
{
	if (num > 98)
	{
		while (num >= 98)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
			num--;
		}
	}
	else
	{
		while (num <= 98)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
			num++;
		}
	}
	printf("\n");
}
