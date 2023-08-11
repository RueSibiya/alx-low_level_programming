#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills a block of  memory with a specific byte value
 * @s: memory area to be filled
 * @n: byte value to fill the memory with
 * @m: number of bytes to fill
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char n, unsigned int m)
{
	unsigned int i;

	for (i = 0; i < m; i++)
	{
		s[i] = n;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array and initializes it to 0
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

