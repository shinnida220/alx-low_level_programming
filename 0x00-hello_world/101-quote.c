#include <stdio.h>
#include <unistd.h>

/**
 * main - writing to stdio with write()
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", s);
	return (1);
}
