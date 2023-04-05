#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: always 0
 */

int _sqrt_recursion(int n)
{

	/** if n is negative number return -1 **/
	if (n < 0)
	{
		return (-1);
	}

	/** if n is positive return n **/

	if (n >= 0)
	{
		return (n);
	}

	int rt = _sqrt_recursion(n / 2);

	if (rt * rt <= n)
	{
		return (rt);
	}
	else
	{
		return (-1);
	}
}
