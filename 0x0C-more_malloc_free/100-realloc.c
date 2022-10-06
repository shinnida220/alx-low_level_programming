#include <stdlib.h>
/**
 * _realloc - a function that reallocates a memory block
 * using malloc and free
 * @ptr: pointer
 * @old_size: the old size
 * @new_size: the new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *tmp, *new_ptr;
	unsigned int i;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (0);

	tmp = ptr;
	for (i = 0; i < (old_size || i < new_size); i++)
		*(new_ptr + i) = tmp[i];

	free(ptr);
	free(tmp);
	return (new_ptr);
}
