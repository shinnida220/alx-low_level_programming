#include <stdlib.h>
/**
 * _calloc - a function that allocates memory
 * for an array, using malloc.
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, sz;

	if (nmemb == 0 || size == 0)
		return (NULL);

	sz = (nmemb * size);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < sz; i++)
		p[i] = 0;

	return (p);
}
