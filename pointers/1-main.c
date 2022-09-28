#include <stdio.h>

/**
 * main - addresses of variables
 * https://alx-intranet.hbtn.io/concepts/60
 * Return: Always 0.
 */
int main(void)
{
    char c;
    int n;
    int *p;
    char *pp;

    printf("Size of pointer: %lu bytes\n", sizeof(p));
    printf("Address of variable 'p': %p\n", &p);
    printf("Address of variable 'c': %p\n", &c);
    printf("Address of variable 'n': %p\n", &n);

    n = 98;
    p = &n; /*p == &n, so *p == n*/
    printf("Address of 'n': %p\n", &n);
    printf("Value of 'p': %p\n", p);

    /**
     * Dereferencing
     *
     * The real power of pointers is that they can be used to
     * manipulate values stored at the memory address they point to.
     * This is called dereferencing.
     * To do this, you can use the dereference operator *.
     */

    *p = 402;
    printf("Value of 'n': %d\n\n", n);

    c = 'H';
    pp = &c;
    printf("Value of 'c': %d ('%c')\n", c, c);
    printf("Address of 'c': %p\n", &c);
    printf("Value of 'pp': %p\n\n", pp);

    *pp = 'o';
    printf("Value of '*pp': %d\n", *pp);
    printf("Value of 'c': %d ('%c')\n", c, c);
    printf("Value of '*pp': %d ('%c')\n", *pp, *pp);

    /**
     * Note that * has a different meaning depending on the context
     * (declaring vs dereferencing pointers).
     * at declaration, it is used to declare a variable of
     * type pointer to something.
     * Example: int *n;
     * when used inside the code it is used to dereference pointers.
     * Example *n = 98;
     */

    return (0);
}
