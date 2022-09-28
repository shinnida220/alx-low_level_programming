int _divider(int n, int m);

/**
 * is_prime_number - a function that returns
 * 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: integer params
 * Return: int 1 or 0
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (_divider(3, n));
	}
}

/**
 * _divider - Checks if thenumber is prime?
 * @n: divider
 * @m: number to divide
 * Return: boolean
 */
int _divider(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (_divider(n + 2, m));
	}
	else
	{
		return (1);
	}
}
