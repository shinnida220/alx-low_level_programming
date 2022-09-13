#include "main.h"

/**
 * print_sign - print the sign ofof a given number
 * @n: n integer
 *
 * Return: 1 (if +ve, 0-zero  -1 (if -ve
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
