#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int.
 * @b: binary.
 * Return: int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int b_two, len;

	if (!b)
		return (0);

	i = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, b_two = 1; len >= 0; len--, b_two *= 2)
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);

		if (b[len] & 1)
			i += b_two;
	}

	return (i);
}
