#include "main.h"

/**
 * div - Divides two integers
 * @__numer: First integer (dividend)
 * @__denom: Second integer (divisor)
 *
 * Return: Result of the division
 */
extern div_t div(int __numer, int __denom);

/**
 * add - Adds two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Sum of the two integers
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Difference of the two integers
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Product of the two integers
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * mod - Computes the remainder of division
 * @a: First integer (dividend)
 * @b: Second integer (divisor)
 *
 * Return: Remainder of the division
 */
int mod(int a, int b)
{
	/* Check if the divisor is zero */
	if (b == 0)
	{
		printf("Error: Division by zero!\n");
		exit(1);
	}

	return (a % b);
}

