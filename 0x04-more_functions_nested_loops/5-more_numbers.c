/**
 * more_numbers - print 10 times 0-14.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 1;
	int j = 0;

	while (i <= 10)
	{
		while (j <= 14)
		{
			if (j >= 10)
				_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			++j;
		}
		_putchar('\n');
		j = 0;
		++i;
	}
}
