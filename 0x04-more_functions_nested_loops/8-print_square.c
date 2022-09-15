#include "main.h"
/**
 * print_square - a function that draws a square .
 * @n: integer
 * Return: void
 */
void print_square(int n)
{
    int i, j;

    if (n > 0)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
                _putchar('#');
            _putchar('\n');
        }
    }
    _putchar('\n');
}
