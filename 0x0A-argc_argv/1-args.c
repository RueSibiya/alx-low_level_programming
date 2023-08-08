#include <stdio.h>

/**
  * main - entry point
  * @argc: number of command-line arguments
  * @argv: array of strings containing the arguments
  * Return: always 0 (success)
  */

int main(int argc, char *argv[])
{
	int num_args = argc - 1;

	printf("%d\n", num_args);
	(void)argv;

	return (0);
}

