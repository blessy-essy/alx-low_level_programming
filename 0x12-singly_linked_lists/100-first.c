#include <stdlib.h>
#include <stdio.h>

void print_words(void)
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}

void __attribute__((constructor)) before_main();

/**
 * print_words - prints a sentence before the main
 * function is then to be executed
 */
