#include "main.h"

/**
 * times_table -
 * prints the multiplication table of nine (9)
 *
 * Return: void
 */
void times_table(void)
{
	int r, c, prd, tens, ones;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			prd = r * c;
			tens = prd / 10;
			ones = prd % 10;

			if (c == 0)
			{
				_putchar('0');
			}
			else if (prd < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
