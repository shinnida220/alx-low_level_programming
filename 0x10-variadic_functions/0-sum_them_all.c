#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: first argument
 * @...: remaining args
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum = 0;

	if (n == 0)
		return (n);

	va_start(ap, n);
	for (i = n; i >= 0; i = va_arg(ap, int))
		sum = i;

	va_end(ap);

	return (sum);
}
