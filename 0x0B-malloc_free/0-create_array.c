#include <stdlib.h>

/**
 * create_array - creates an array of chars initialized with c.
 * @size: size of the array.
 * @c: initial values of each index
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(c) * size);
	if (ch != NULL)
	{
		for (; i < size; i++)
			ch[i] = c;
	}
	return (ch);
}
