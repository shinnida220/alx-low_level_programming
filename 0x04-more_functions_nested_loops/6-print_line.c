#include "main.h"
/**
 * print_line - a function that draws a line.
 *
 * Return: void
 */
void print_line(int n)
{
    int i = 0;

    if (n > 0)
    {
        for (; i < n; i++)
            _putchar('_');
    }
    _putchar('\n');
}
