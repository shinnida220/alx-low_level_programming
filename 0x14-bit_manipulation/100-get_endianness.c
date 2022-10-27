#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: int - 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	char *c;
	unsigned int x;

	x = 1;
	c = (char *)&x;

	return ((int)*c);
}
