#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @a: pointer to the input string
 * Return: 0 (Success)
 */

void _puts_recursion(char *a)
{
	if (*a)
	{
		_putchar(*a);
		_puts_recursion(a + 1);
	}

	else
		_putchar('\n');
}

