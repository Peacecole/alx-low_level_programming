#include "main.h"
#include <stdio.h>
/**
 * strcat - merges two strings
 * @dest: pointer to the destination string
 * @src: the source string
 * Return: pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
        int i = 0;
        int dest_len = 0;

        while (dest[i++])
                dest_len++;

        for (i = 0; src[i]; i++)
                dest[dest_len++] = src[i];

        return (dest);
}
