#include "main.h"

/**
 * factorial - recursive function to compute the factorial of a number
 * @n: the number for which factorial is determined
 * Return: factorial of the number 'n'
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

