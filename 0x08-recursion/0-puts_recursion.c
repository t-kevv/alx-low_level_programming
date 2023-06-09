#include "main.h"

/**
 * _puts_recursion - print a string
 * @s: the string to printed
 *
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
