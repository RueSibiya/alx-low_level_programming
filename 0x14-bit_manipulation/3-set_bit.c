#include "main.h"

/**
 * set_bit - places the value of a bit at a given index
 * @n: pointer to the number to change
 * @index: is the index starting from 0 of the bit to be set
 * Return: 1 if it worked,or -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

