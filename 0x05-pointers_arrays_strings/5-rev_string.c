#include "main.h"

int get_string_length(char *s);

/**
 * rev_string - that reverses a string.
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int max, half;
	char first, last;

	max = getStringLength(*s) - 1;

	half = max / 2;
	while (half >= 0)
	{
		first = s[max - half];
		last = s[half];
		s[half] = first;
		s[max - half] = last;
		half--;
	}
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
