/**
 * @file 2-main.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-09-19
 *
 * @copyright Copyright (c) 2022
 *
 * A pointer is simply the address of a piece of data in memory.
 * A pointer variable is a variable that stores the address of that piece of data. Like any other variable it needs to be declared.
 * General form is: var_type *var;
 * int *ptr;
 * char *ptr2
 * The * tells that the variable var is a pointer…
 * that points to a var_type.
 * The value of var will be a memory address holding a value of type var_type
 *
 * On most 64 bits machines, the size of pointers is 8 bytes.
 */

#include <stdio.h>

/**
 * main - printing the address of a pointer
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;
    int *p;

    n = 98;
    p = &n;

    printf("Address of 'n': %p\n", &n);
    printf("Address of variable 'p': %p\n", &p);
    printf("Value of 'p': %p\n", p);

    /**
     * Dereferencing
     * The real power of pointers is that they can manipulate
     * values stored at the memory address they point to.
     * This is called dereferencing.
     * To do this, you can use the dereference operator *.
     */

    *p = 402;
    printf("Value of 'n': %d\n", n);

    /**
     * Summary:
     * int *p;: * is used in the declaration:
     * p is a pointer to an integer,
     * and so, after dereferencing, *p is an integer.
     *
     * p = &n;: & takes the address of n. So now p == &n, so *p == n
     */

    return (0);
}