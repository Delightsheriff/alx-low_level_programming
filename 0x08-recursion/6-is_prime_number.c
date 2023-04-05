#include "main.h"

int prime(int n, int temp);

/**
 * is_prime_number - returns a prime numbers
 * @n: argument
 *
 * Return: integer
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - checkes for prime numbers
 * @n: first argument
 * @temp: second argument
 *
 * Return: integer
 */

int prime(int n, int temp)
{
	if (n <= 1)
	{
		return (0);
	}
	if (temp * temp > n)
	{
		return (1);
	}
	if (n % temp == 0)
	{
		return (0);
	}
	return (prime(n, temp + 1));
}
