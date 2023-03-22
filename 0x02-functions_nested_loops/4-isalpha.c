#include "main.h"

/**
 * _isalpha - check for alphabet character
 * @c: the character to be check
 * Return: Always 0 (Success)
*/

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
