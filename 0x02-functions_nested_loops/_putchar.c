#include <unistd.h>

/**
 *  _putchar - writes the character c
 *  Return 1 on success.
 *  Return -1 on error
 */


int _putchar(char c)

{
	return (write(1, &c, 1));
}
