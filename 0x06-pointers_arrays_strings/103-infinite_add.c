#include "main.h"

/**
 * infinite_add - adds two integer
 * @n1: first operand
 * @n2: second operand
 * @r: buffer result
 * @size_r: buffer size
 *
 * Return: char
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int digit1;
	int digit2;
	int sum;
	int digit_sum;
	int i, j;
	char temp;

	if (len1 + len2 + 1 > size_r)
	{
		return (0);
	}

	for (i = 1; i <= len1 || i <= len2 || carry; i++)
	{
		digit1 = (i <= len1) ? n1[len1 - i] - '0' : 0;
		digit2 = (i <= len2) ? n2[len2 - i] - '0' : 0;
		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		digit_sum = sum % 10;
		r[i - 1] = digit_sum + '0';
	}
	r[len1 + len2] = '\0';
	for (i = 0, j = len1 + len2 - 1; i < j; i++, j--)
	{
		temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
