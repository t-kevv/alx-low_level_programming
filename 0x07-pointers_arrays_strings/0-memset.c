#include "main.h"

/**
 * _memset - entry point
 * @s: pointer destination
 * @b: constant byte
 * @n: bytes
 * Return: always success
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int j; /* Declare loop counter variable j */

	/* Loop through the first n bytes of s, setting each to b */

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
