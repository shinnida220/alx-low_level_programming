#include <stdio.h>

/**
 * main - prints the numbers from 0 to 9,followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 10; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
