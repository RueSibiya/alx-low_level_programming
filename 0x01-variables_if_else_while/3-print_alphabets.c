#include <stdio.h>

/**
  * main - entry point
  * Return: always 0 (success)
  */

int main(void)
{
	char letter;

	for (letter = 'm'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'M'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}

