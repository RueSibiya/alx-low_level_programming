#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - evaluates if an integer is a prime number or not
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a digit is prime recursively
 * @n: digit to be evaluated
 * @i: iterator
 * Return: 1 if n is prime, otherwise return 0
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}


