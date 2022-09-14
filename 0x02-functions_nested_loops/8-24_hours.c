#include "main.h"

/**
 * jack_bauer -  prints every minute of the day
 *  of Jack Bauer, starting from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hrLeft, hrRight, mnLeft, mnRight;

	mnRight = 0;
	mnLeft = 0;
	hrRight = 0;
	hrLeft = 0;

	while (hrLeft <= 2)
	{
		hrRight = 0;
		while (hrRight <= 9)
		{
			if (hrLeft == 2 && hrRight > 3)
				break;

			mnLeft = 0;
			while (mnLeft <= 5)
			{
				mnRight = 0;
				while (mnRight <= 9)
				{
					_putchar(hrLeft);
					_putchar(hrRight);
					_putchar(':');
					_putchar(mnLeft);
					_putchar(mnRight);
					_putchar('\n');
					++mnRight;
				}
				++mnLeft;
			}
			++hrRight;
		}
		++hrLeft;
	}
}
