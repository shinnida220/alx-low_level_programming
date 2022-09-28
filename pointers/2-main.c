#include <stdio.h>

/**
 * modif_my_param_useless - this function does not modify n
 * @m: a useless integer
 *
 * Return: nothing.
 */
void modif_my_param_useless(int m)
{
    m = 402;
}

/**
 * modif_my_param - set the integer to 402
 * @m: a pointer the integer we want to set to 402
 *
 * Return: nothing
 */
void modif_my_param(int *m)
{
    printf("Value of 'm': %p\n", m);
    printf("Address of 'm': %p\n", &m);
    *m = 402;
}

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)
{
    *cc = 'o';
    ccc = 'l';
}

/**
 * main - parameters are passed by value
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;
    int *p;

    p = &n;
    n = 98;
    printf("Value of 'n' before the call: %d\n", n);
    printf("Address of 'n': %p\n", &n);
    modif_my_param_useless(n);

    printf("\n\nValue of 'n' before the call: %d\n", n);
    printf("Address of 'n': %p\n", &n);
    printf("Value of 'p': %p\n", p);
    printf("Address of 'p': %p\n", &p);
    modif_my_param(p);
    printf("Value of 'n' after the call: %d\n", n);

    printf("\n\nExample 2\n");
    char c;
    char *pp;

    pp = &c;
    c = 'H';
    modif_my_char_var(pp, c);
    printf("Value of 'c' after the call: %d\n", c);
    printf("Value of '*pp': %d ('%c')\n", *pp, *pp);
    return (0);
}