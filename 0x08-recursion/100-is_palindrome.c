#include "main.h"

int _help(char *s, int temp, int test);

/**
 * is_palindrome - checks if a string is palindromr or not
 * @s:character parameter
 *
 * Return: integer
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (_help(s, 0, len - 1));
}

/**
 * _help - checkes the string
 * @s: array of string
 * @temp: first argument
 * @test: second argument
 *
 * Return: integer
 */

int _help(char *s, int temp, int test)
{
	if (temp >= test)
	{
		return (1);
	}
	else if (s[temp] != s[test])
	{
		return (0);
	}
	else
	{
		return (_help(s, temp + 1, test - 1));
	}
}
