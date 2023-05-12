#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: a pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
