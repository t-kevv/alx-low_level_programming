#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: the string to be printed in reverse
 *
 * Return: always 0
 */

void _print_rev_recursion(char *s)
{
	/** if current character is null carater return **/
	if (*s == '\0')
	{
		return;
	}


	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
