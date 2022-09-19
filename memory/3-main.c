#include <stdio.h>
/*** A pointer is simply the address of a piece of data in memory.
 * A pointer variable is a variable that stores the address of that piece of data. Like any other variable it needs to be declared.
 * General form is: var_type *var;
 * int *ptr;
 * char *ptr2
 * The * tells that the variable var is a pointer…
 * that points to a var_type.
 * The value of var will be a memory address holding a value of type var_type
 *
 * On most 64 bits machines, the size of pointers is 8 bytes.
 *
 *
 * Dereferencing
 * The real power of pointers is that they can manipulate
 * values stored at the memory address they point to.
 * This is called dereferencing.
 * To do this, you can use the dereference operator *.
 *
 *
 * Summary:
 * int *p;: * is used in the declaration:
 * p is a pointer to an integer,
 * and so, after dereferencing, *p is an integer.
 *
 * p = &n;: & takes the address of n. So now p == &n, so *p == n
 */

/**
 * main - derefencing pointers, example with int and char types
 *
 * Return: Always 0.
 */
int main(void)
{
    // int n;
    // int *p;
    // char c;
    // char *pp;

    // c = 'H';
    // pp = &c;
    // n = 98;
    // p = &n;
    // printf("Value of 'c': %d ('%c')\n", c, c);
    // printf("Address of 'c': %p\n", &c);
    // printf("Value of 'pp': %p\n", pp);
    // printf("Value of 'n': %d\n", n);
    // printf("Address of 'n': %p\n", &n);
    // printf("Value of 'p': %p\n", p);
    // *p = 402;
    // *pp = 'o';
    // printf("Value of 'n': %d\n", n);
    // printf("Value of '*pp': %d\n", *pp);
    // printf("Value of 'c': %d ('%c')\n", c, c);
    // printf("Value of '*pp': %d ('%c')\n", *pp, *pp);

    int n = 98;
    int *p = &n;

    // p = 402;
    // p++;

    printf("Value of 'n': %d\n", n);

    return (0);
}