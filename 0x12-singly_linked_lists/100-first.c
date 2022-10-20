#include <stdio.h>
/**
 * myStartuoFunc - a function that runs before main
 * We apply the constructor attribute to myStartupFunc()
 * so that it is executed before main()
 */
void __attribute__((constructor)) myStartupFunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
