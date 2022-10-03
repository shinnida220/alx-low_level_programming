#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a
 * newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 *
 * @str: initial pointer
 * Returns: pointer to new character
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	char *dup;
	int i = 0;

	while (str[i] != '\0')
		i++;

	dup = malloc(sizeof(char) * (i + 1));
	if (dup != NULL)
	{
		int j;

		for (j = 0; j <= i; j++)
			dup[j] = str[j];
	}

	return (dup);
}
