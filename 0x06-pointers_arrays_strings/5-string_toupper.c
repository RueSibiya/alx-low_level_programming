#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes letters from lowercase to uppercase
 * @s: analyzed string
 * Return: String with all letters in uppercase
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}
	return (s);
}

