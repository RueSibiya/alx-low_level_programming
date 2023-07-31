#include "main.h"

/**
 * _strpbrk - function that locates a substring
 * @s: pointer to the input string
 * @accept: pointer to the string containing characters to search for
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}


