#include "main.h"

/**
 * _print_rev_recursion - recursively prints a string in reverse.
 * @b: pointer to the input string
 */

void _print_rev_recursion(char *b)
{
	if (*b)
	{
		_print_rev_recursion(b + 1);
		_putchar(*b);
	}
}

