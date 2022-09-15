/**
 * more_numbers - print 10 times 0-14.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int ch;

	i = 1;
	while (i <= 10)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch >= 10)
				_putchar((ch / 10) + 48);
			_putchar((ch % 10) + 48);
		}
		_putchar('\n');
		++i;
	}
}
