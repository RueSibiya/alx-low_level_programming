#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - uses pointer to function to print name
 * @name: string to add
 * @f: pointer to function
 * Return: nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	f(name);

	if (name == NULL || f == NULL)
	return;

	f(name);
}