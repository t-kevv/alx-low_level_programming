#include "main.h"

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
	if (st >= en)
	{
		return (1);
	}

	if (s[st] != s[en])
	{
		return (0);
	}

	return (check(s, st + 1, en - 1));
}

/**
 * is_palindrome - detects if a string is a polidrome
 * @s: string
 *
 * Return: always 0
 */

int is_palindrome(char *s)

{
	int len = strlen(s);

	return (check(s, 0, len - 1));
}
