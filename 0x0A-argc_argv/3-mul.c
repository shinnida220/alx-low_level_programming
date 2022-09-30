#include <stdio.h>
/**
 * main - pmultiplies two argument numbers.
 * @argc: number of command line arguments.
 * @argv: array of command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
