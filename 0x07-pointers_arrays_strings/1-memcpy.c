#include "main.h"

/**
 * _memcpy - entry point
 * @dest: destination
 * @src: source
 * @n: number
 *
 * Return: pointer to start
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j; /* Declare loop counter variable j */

	/*copy n bytes from src to dest*/
	for (j = 0; j < n; j++)
	{
	dest[j] = src[j];
	}

	return (dest);
}
