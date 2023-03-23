#include "main.h"

/**
 * _isdigit - checks whether a character is a digit
 * @x: the character to check
 *
 * Return: 1 if x is a character is a digit, 0 otherwise
 */

int  _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}

