#include "main.h"

/**
 * _isupper - checks whether a character is an uppercase letter
 * @x: the character to check
 *
 * Return: 1 if x is an uppercase letter, 0 otherwise
 */

int  _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
	return (1);
	}
	return (0);
}
