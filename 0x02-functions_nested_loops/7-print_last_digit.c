#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: n integer
 *
 * Return: int - absolute value of n
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (n < 0)
		lastDigit = lastDigit * -1;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
