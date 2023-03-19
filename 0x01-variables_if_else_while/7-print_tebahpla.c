#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
        char alp[26] = "zyxwutsrqponmlkjihgfedcba";
        int i;

        for (i = 0; i < 26; i++)
        {
                putchar(alp[i]);
        }
        putchar('\n');

        return (0);
}
