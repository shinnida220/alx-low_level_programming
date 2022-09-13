#include "main.h"

/**
 * main - Prints _putchar witha a new line
 * return: 0 (success)
 */
int main(void)
{
	char textToPrint[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(textToPrint[i]);
	}
	_putchar('\n');

	return (0);
}
