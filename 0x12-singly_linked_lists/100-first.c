#include <stdio.h>

void myFirst(void) __attribute__ ((constructor));
/**
 * myFirst - Print something before main
 * is executed
 */
void myFirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
