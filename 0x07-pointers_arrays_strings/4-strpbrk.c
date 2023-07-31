#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string
 * @s: pointer to the input string to be searched
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
