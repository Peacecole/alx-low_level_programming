#include "main.h"
/**
 * _isalpha - Check if character is an alphabetic character.
 * @alp: type int character
 * Return: 1 if letter (lowercase or uppercase) and 0 if number or special char
 */
int _isalpha(int alp)
{
	if ((alp < 91 && alp > 64) || (alp < 123 && alp  > 96))
		return (1);
	else
		return (0);
}
