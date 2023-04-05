#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 *
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{

	char *occ, *temp;

	if (!*needle) 
		return (haystack);

	while (*haystack)
	{

		if (*haystack == *needle)
		{
			occ = haystack;
			temp = needle;

			while (*temp)
			{

				if (*haystack++ != *temp++)
				{
				haystack = occ;
				break;
				}
			}

			if (occ != haystack)
				return (occ);
		}

		haystack++;
	}

	return (0);
}
