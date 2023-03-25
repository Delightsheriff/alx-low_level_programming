#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	long n = 612852475143;
	long i = 0;
	long largest_prime_factor = 2;

	while (i <= sqrt(n))
	{
		if (n % i == 0)
		{
			n /= i;
			largest_prime_factor = i;
		}
		else
		{
			i++;
		}
	}
	if (n > largest_prime_factor)
	{
		largest_prime_factor = n;
	}
	printf("%ld\n", largest_prime_factor);
	return (0);
}
