#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: initial segment byte
 * @accept: bytes
 * Return: (s)
 */

unsigned int _strspn(char *s, char *accept)
{

	return (strspn(s, accept));
}
