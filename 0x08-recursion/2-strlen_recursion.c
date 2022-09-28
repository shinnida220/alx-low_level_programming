/**
 * _strlen_recursion - calculate the length of a string.
 * @s: pointer to string params
 * Return: length of string via recursion
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
