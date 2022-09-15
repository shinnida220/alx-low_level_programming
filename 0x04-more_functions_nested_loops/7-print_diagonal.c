#include "main.h"
/**
 * print_diagonal - a function that draws a line.
 * @n: integer
 * Return: void
 */
void print_diagonal(int n)
{
    int i = 0, j;

    if (n > 0)
    {
        for (; i < n; i++)
        {
            for (j = 0; j < i; j++)
                _putchar(' ');
            _putchar(98);
            _putchar('\n');
        }
    }
    _putchar('\n');
}
