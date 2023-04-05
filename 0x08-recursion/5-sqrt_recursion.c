#include "main.h"
#include <math.h>

int root_(int n, int test);

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: argument
 *
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return (root_(n, 1));
}


/**
 * root_ - solves square roots for natural numbers
 * @n: first argument (returned from _sqrt_recursion
 * @test: second argument (iteration)
 *
 * Return: integer
 */

int root_(int n, int test)
{
	int temp = test * test;

	if (temp == n)
	{
		return (test);
	}
	else if (temp < n)
	{
		return (root_(n, test + 1));
	}
	else
	{
		return (-1);
	}


}
