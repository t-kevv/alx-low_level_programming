#include "main.h"
#include <stdio.h>

/**
 * _strchr - entrey point
 * @s: pointer to string to search
 * @c: character to search for
 *
 * Return: always 0
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
	if (s[j] == c)
	{
	return (s - j);
	}

	}

	return (NULL);
}
