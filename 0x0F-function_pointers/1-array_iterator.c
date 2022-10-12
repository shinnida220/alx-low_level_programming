#include <stdlib.h>
/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array.
 * @array: array to execute a function on
 * @size: size of array
 * @action: function to run on elements
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
