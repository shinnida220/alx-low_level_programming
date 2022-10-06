#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int sz1 = 0, sz2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[sz1] != '\0')
		sz1++;

	while (s2[sz2] != '\0')
		sz2++;

	if (n > sz2)
		n = sz2;

	p = malloc((sz1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (i = 0; i < sz1; i++)
		p[i] = s1[i];

	for (; i < (sz1 + n); i++)
		p[i] = s2[i - sz1];

	p[i] = '\0';

	return (p);
}
