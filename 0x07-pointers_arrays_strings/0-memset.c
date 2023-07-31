#include "main.h"

/**
 * _memset - fills a block of memory with a specific value
 * @s: a pointer to a character array
 * @b: the value to be set
 * @n: the number of bytes to be filled
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

