#include "main.h"
#include <stdio.h>
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
		while (s < 98)
		{
			printf("%d, ", s);
			++s;
		}
	}
	else
	{
		while (s > 98)
		{
			printf("%d, ", s);
			--s;
		}
	}
	printf("%d,", 98);
}
