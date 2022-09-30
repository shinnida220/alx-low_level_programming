#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add posituive numbers all arguments.
 * @argc: number of command line arguments.
 * @argv: array of command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		int sum = 0, i;

		for (i = 1; i < argc; i++)
		{
			if (!isdigit(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}
