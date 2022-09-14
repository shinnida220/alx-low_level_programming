#include "main.h"

/**
 * print_to_98 - prints natural numbers till 98.
 * @s: int starting point
 *
 * Return: void
 */
void print_to_98(int s)
{
	if (s <= 98)
	{
		while (s <= 98)
		{
			_putchar(s + '0');
			_putchar(',');
			if (s != 98)
				_putchar(' ');
			++s;
		}
	}
	else
	{
		while (s >= 98)
		{
			_putchar(s + '0');
			_putchar(',');
			if (s != 98)
				_putchar(' ');
			--s;
		}
	}
}
