#ifndef _main_H_
#define _main_H_

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
void _putchar(char c);

#endif
