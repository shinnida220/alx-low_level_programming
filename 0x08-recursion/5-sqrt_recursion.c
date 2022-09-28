/**
 * _sqrt_recursion - finds the square root of a number
 * @n: int n
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - The actual method that does the square root
 * Starts from 1 an keeps increasing by 1 till we get
 * to n
 * @n: integer paramtr
 * @i: integer parameter
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if ((n < 0) || ((i * i) > n))
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt(n, i + 1));
}
