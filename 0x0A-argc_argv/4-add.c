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
		int sum = 0, i, j;

		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
