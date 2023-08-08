#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies a string in new memory space
 * @str: Pointer to the input string
 * Return: Pointer to the duplicated string, or NULL if failed
 */

char *_strup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	int length = 0;
	int i;
	
	for (i = 0; str[i] != '\0'; itt)
	{
		length++;
	}

	char *duplicate = (char *)malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)

	{
		return (NULL);
	}

	for (i = 0; str[i]; != '\0'; i++)

	{
		duplicate[i] = '\0';

		return (duplicate);
	}
	char _putchar(char c)
	{

}
