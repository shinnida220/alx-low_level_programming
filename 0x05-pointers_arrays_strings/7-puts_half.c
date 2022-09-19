#include "main.h"

int get_string_length(char *s);

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string to print.
 * Return: no return.
 */
void puts_half(char *str)
{
	int i;
	int count = get_string_length(str);

	if (count % 2 == 1)
		i = count / 2;
	else
		i = (count - 1) / 2;

	for (i++; i < count; i++)
		_putchar(str[i]);
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
