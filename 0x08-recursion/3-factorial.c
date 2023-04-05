#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number
 *
 * Return: always 0
 */

int factorial(int n)
{
	/** check if n is negative.if negative return -1 **/
	if (n < 0)
	{
	return (-1);
	}

	/** check if n is positive. if positive return 1 **/
	if (n <= 1)
	{
	return (1);
	}

	/** call the function recursively **/

	return (n * factorial(n - 1));
}
