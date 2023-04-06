#include "main.h"

/**
 * _abs - Makes absolute values
 * @i: First argument
 *
 * Description: This function prints the absolute value of an input
 * Return: Always the value of x
 *
 */

int _abs(int i)
{
	if (i < 0)
	{
		int abs_val;

		abs_val = i * -1;
		return (abs_val);
	}
	return (i);

}
