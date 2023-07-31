#include <stdio.h>
void hare(void) __attribute__((constructor));
/**
 * hare - prints to the screen
 *
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
