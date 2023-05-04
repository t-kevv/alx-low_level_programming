#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int f;
	unsigned int res = 0;

	if (!b)
		return (0);

	for (f = 0; b[f]; f++)
	{
		if (b[f] < '0' || b[f] > '1')
			return (0);
		res = 2 * res + (b[f] - '0');
	}

	return (res);
}


