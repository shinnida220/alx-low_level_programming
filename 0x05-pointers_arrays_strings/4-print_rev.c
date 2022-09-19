#include "main.h"

int get_string_length(char *s);

/**
 * print_rev - prints string backwards
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
    int i = get_string_length(s) - 1;

    while (i >= 0)
    {
        _putchar(s[i]);
        i--;
    }
    _putchar('\n');
}

/**
 * get_string_length - Get the length of a string
 * @s: character to get the length
 * Return: int - size of the character
 */
int get_string_length(char *s)
{
    int i = 0;

    while (s[i] != '\0')
        i++;
    return (i);
}
