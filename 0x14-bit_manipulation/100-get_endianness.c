#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: always 0
 */

int get_endianness(void)
{
	unsigned int f = 1;
	char *p = (char *) &f;

	return (*p);
}
i
