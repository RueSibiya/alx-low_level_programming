#include <stdio.h>

/**
* main - entry point
* Return: (0) is always a success
*/

int main(void)

{
	int number_start = '0';
	int number_end = '9';

	int i = number_start;

	for (; i <= number_end; i++)
	{
		putchar(i);
		putchar('\0');
	}
		return (0);
}







