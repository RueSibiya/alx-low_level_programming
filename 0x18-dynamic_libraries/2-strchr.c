#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * @s: pointer to input
 * @c: character to be found
 * Return: pointer to first occurence of char or NULL if char not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}


