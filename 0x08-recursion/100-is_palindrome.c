#include "main.h"


/**
 * _strlen_recursion - returns lenght if a string
 * @s: string
 *
 * Return: always 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * check - check if string is a polindrome
 * @s: string
 * @st: number
 * @en: number
 *
 * Return: always 0
 */

int check(char *s, int st, int en)
{
	if (*(s + st) == *(s + en))
	{
		if (st == en || st == en + 1)
		{
		return (1);
		}
		return (0 + check(s, st + 1, en - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a polidrome
 * @s: string
 *
 * Return: always 0
 */

int is_palindrome(char *s)

{
	if (*s == '\0')
	{
		return (1);
	}
	return (check(s, 0, _strlen_recursion(s) - 1));
}
