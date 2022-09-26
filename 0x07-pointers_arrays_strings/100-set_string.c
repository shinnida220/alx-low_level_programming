/**
 * set_string - a function that sets the value
 * of a pointer to a char
 * @s: source adress.
 * @to: target adress.
 * Return: void.
 */
void set_string(char **s, char *to)
{
    *s = to;
}