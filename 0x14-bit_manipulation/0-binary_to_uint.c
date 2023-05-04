#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	return (0);

	unsigned int res = 0;

	for (int i = 0; b[i] != '\0'; i++)
	{
	if (b[i] == '0')
	{
	res = res * 2;
	}
	else if (b[i] == '1')
	{
	res = res * 2 + 1;
	}
	else
	{
	return (0);
	}
	}
	return (res);
}

