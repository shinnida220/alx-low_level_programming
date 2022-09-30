#include <stdio.h>
/**
 * main - prints all arguments, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array of command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
