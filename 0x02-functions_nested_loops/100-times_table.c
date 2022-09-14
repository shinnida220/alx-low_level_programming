#include "main.h"
#include <stdbool.h>

/**
 * _print_char - prints a character using _putchar
 *
 * @c: charater to print
 * @s: size, number of times to print the character
 * @is_start: boolean
 */
void _print_char(char c, int s, bool is_start)
{
	int i = 0;

	if (is_start == true)
		_putchar(',');

	for (i = 0; i < s; i++)
		_putchar(c);
}

/**
 * print_times_table - prints the times table of nine (9)
 * @n: int n size of table
 * Return: void
 */
void print_times_table(int n)
{
	if (n >= 0 && n < 15)
	{
		int r, c, prd, tens, ones;

		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <= n; c++)
			{
				prd = r * c;
				tens = prd / 10;
				ones = prd % 10;

				if (c == 0)
				{
					_print_char('0', 1, false);
				}
				else if (prd < 10)
				{
					_print_char(' ', 3, true);
					_print_char(ones + '0', 1, false);
				}
				else if (prd >= 10 && prd < 100)
				{
					_print_char(' ', 2, true);
					_print_char((tens % 10) + '0');
					_print_char(tens + '0', 1, false);
				}
				else if (prd > 99 && prd < 1000)
				{
					_print_char(' ', 1, true);
					_putchar(prd / 100 + '0', 1, false);
					_putchar((tens % 10) + '0', 1, false);
					_putchar(ones + '0', 1, false);
				}
			}
			_putchar('\n');
		}
	}
}
