#include "main.h"

/**
 * print_alphabet - print alphabets
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;

	for (i = 1; i<= 10; i++) 
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
		c = 'a';
	}
}