#include "main.h"

/**
 * _strspn - entry point
 * @s: pointer
 * @accept: pionter
 *
 * Return: always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, p, m, c;

	value = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
	c = 0;

	for (p = 0; accept[p] != '\0'; p++)
	{
	if (accept[p] == s[j])
	{
		m++;
		c = 1;
	}
	}

	}

	return (null);
}
