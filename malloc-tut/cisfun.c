#include <stdio.h>

/**
 * cisfun - function used for concept introduction
 * @n1: number of projects
 * @n2: number of tasks
 *
 * Return: nothing.
 */
void cisfun(unsigned int n1, unsigned int n2)
{
	int n;
	char c;
	int *ptr;
	char array[3];

	/**
	 * In the above example, the arguments and the
	 * local variables are stored automatically in memory
	 * when the function is called.
	 * The program reserves space and uses it without
	 * you having to think about it.
	 */
}

/**
 * segf - Let's segfault \o/
 *
 * Return: nothing.
 */
void segf(void)
{
	char *str = "Holberton";

	// str[0] = 's'; // Produces an error (Bus error)
	printf("%s\n", str);

	char s[] = "Holberton";

	s[0] = 'S';
	printf("%s\n", s);
}

/**
 *  main - concept introduction
 *
 * Return: 0.
 */
int main(void)
{
	segf();
	return (0);
}