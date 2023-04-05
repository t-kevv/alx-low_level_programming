#include "main.h"

int check(int n, int i);

/**
 * is_prime_number - Returns if a  number is a prime number
 * @n: the number to be checked
 *
 * Return: always 0
 */

int is_prime_number(int n)
{
	return (check(n, 1));
}


/**
 * check - check if number is prime number
 * @n: the number to be checked
 * @i: the checked time
 *
 * Return: always 0
 */

int check(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (check(n, i + 1));
}
