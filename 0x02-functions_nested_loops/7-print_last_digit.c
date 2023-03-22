#include "main.h"

/**
  * print_last_digit - Print the last digit
  * @i: First argument
  *
  * Description: This function prints the last digit of numbers
  * Return: Always the value of x
  *
  */

int print_last_digit(int i)
{
	int x = i % 10;

	if (x < 0)
	{
		x = x * -1;
	}
	_putchar(x + '0');

	return (x);

}
