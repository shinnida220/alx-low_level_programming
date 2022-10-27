#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1
 * at a given index.
 * @n: pointer of number.
 * @index: index of the bit.
 * Return: 1 / -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
