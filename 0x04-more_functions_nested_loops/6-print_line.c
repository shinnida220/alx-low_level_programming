#include "main.h"
/**
 * print_line - a function that draws a line.
 *
 * Return: void
 */
void print_line(int n)
{
    int i = 1;

    if (n > 0)
    {
        while (i <= n)
        {
            _putchar('_');
            ++i;
        }
    }
    _putchar('\n');
}
