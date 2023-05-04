#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int f, ct = 0;
	unsigned long int cr;

	for (f = 63; f >= 0; f--)
	{
	cr = n >> f;

	if (cr & 1)
	{
	_putchar('1');
	ct++;
	}
	else if (ct)
	_putchar('0');
	}
	if (!ct)
	_putchar('0');
}

