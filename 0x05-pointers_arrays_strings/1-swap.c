#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers.
 * @a: the first integer to be swapped.
 * @b: the second integer to be swapped
 * return: success
 */

void swap_int(int *a, int *b)

{
	int temp = *a;

	*a = *b;
	*b = temp;
}
