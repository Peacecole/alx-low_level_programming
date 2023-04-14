#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * digit_test - checks if a string contains a non-digit type
 * @str: string to be checked
 * Return: 0 if true, 1 otherwise
 */
int digit_test(char *str)
{
int i = 0;
while (str[i])
{
if (str[i] < '0' || str[i] > '9')
return (0);
i++;
}
return (1);
}
/**
 * _strlen - determines string length
 * @str: string whose length is to be determined
 *
 * Return: string length
 */
int _strlen(char *str)
{
int i = 0;
while (str[i] != '\0')
{
i++;
}
return (i);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
char *str1, *str2;
int len1, len2, len3, i, carry, f_digit, s_digit, *result, j = 0;
str1 = argv[1], str2 = argv[2];
if (argc != 3 || !digit_test(str1) || !digit_test(str2))
len1 = _strlen(str1);
len2 = _strlen(str2);
len3 = len1 + len2 + 1;
result = malloc(sizeof(int) * len3);
if (!result)
return (1);
for (i = 0; i <= len1 + len2; i++)
result[i] = 0;
for (len1 = len1 - 1; len1 >= 0; len1--)
{
f_digit = str1[len1] - '0';
carry = 0;
for (len2 = _strlen(str2) - 1; len2 >= 0; len2--)
{
s_digit = str2[len2] - '0';
carry += result[len1 + len2 + 1] + (f_digit * s_digit);
result[len1 + len2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
result[len1 + len2 + 1] += carry;
}
for (i = 0; i < len3 - 1; i++)
{
if (result[i])
j = 1;
if (j)
_putchar(result[i] + '0');
}
if (!j)
_putchar('0');
_putchar('\n');
free(result);
return (0);
}
