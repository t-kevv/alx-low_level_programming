#include "main.h"

/**
 * flip_bits - returns number of bit
 * @n: number
 * @m: number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int f;
	int ct = 0;
	unsigned long int cr;
	unsigned long int dm = n ^ m;

	for (f = 63; f >= 0; f--)
	{
	cr = dm >> f;
	if (cr & 1)
	ct++;
	}

	return (ct);
}

