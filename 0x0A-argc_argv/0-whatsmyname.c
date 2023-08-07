#include <stdio.h>

/**
  * main - entry point
  * @argc: number of command line arguments
  * @argv: array of strings with arguments
  * Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	printf("Program Name: %s\n", argv[0]);
	}
	else
	{
		printf("New name.\n");
	}
	return (0);
}

