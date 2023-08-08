#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
  * check_num - check- checks if a string only has numbers
  * @s: input string to be checked
  * Return: Always 0 (success)
  */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))

	{
		if (!isdigit(str[count]))
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
  * main - entry point
  * @argc: number of command line arguments
  * @argv: array of command line arguements
  * Return: 0 (success), 1 (error)
  */

int main(int argc, char *argv[])

{

	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}

		else

		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);

	return (0);
}

