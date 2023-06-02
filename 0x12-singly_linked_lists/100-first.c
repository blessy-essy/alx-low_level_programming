#include <stdio.h>

void print_words(void) __attribute__((constructor));

/**
 * print_words - prints a sentence before the main
 * function is then to be executed
 */

void print_words(void)
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
