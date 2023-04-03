#include "main.h"
#include <stdio.h>

/**
 * print_diagsums  - entry point
 * @a: number
 * @size: number
 *
 * Return: always 0
 */

void print_diagsums(int *a, int size)
{
	int i, n, num1 = 0, num2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		num1 = num1 + a[i];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
	{
		num2 = num2 + a[n];
		printf("%d, %d\n", num1, num2);
	}
}
