#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 * Return: no thing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *str;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if ((i < n - 1) && separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
