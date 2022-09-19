/**
 * swap_int - set the integer to 98
 * @a: a pointer address
 * @b: b pointer address
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
