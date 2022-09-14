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
			printf('%d,', s);
			if (s != 98)
				printf(" ");
			++s;
		}
	}
	else
	{
		while (s >= 98)
		{
			printf('%d,', s);
			if (s != 98)
				printf(" ");
			--s;
		}
	}
}
