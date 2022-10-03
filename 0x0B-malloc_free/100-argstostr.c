#include <stdlib.h>

/**
 * argstostr - joins all the args of a program.
 * @ac: argument size.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *args_out;
	int c, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	args_out = malloc((c + 1) * sizeof(char));

	if (args_out == NULL)
	{
		free(args_out);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			args_out[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			args_out[ia] = av[i][j];
	}
	args_out[ia] = '\0';

	return (args_out);
}
