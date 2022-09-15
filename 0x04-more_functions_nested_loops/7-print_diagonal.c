#include "main.h"
/**
 * print_diagonal - a function that draws a line.
 * @n: integer
 * Return: void
 */
void print_diagonal(int n)
{
    int i = 0;

    if (n > 0)
    {
        while (i < n)
        {
            _putchar('\\');
            _putchar('\n');
            i++;
        }
    }
    _putchar('\n');
}
