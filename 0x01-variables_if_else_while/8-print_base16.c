#include <stdio.h>

/**
 * main - prints base 16 numbers in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char c;

	for (n = 48; n < 58; n++)
		putchar(n);
	
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	
	putchar('\n');
	return (0);
}
