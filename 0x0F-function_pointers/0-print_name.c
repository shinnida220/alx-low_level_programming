#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to print function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return (NULL);

	f(name);
}
