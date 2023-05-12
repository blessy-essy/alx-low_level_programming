#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: input value
 * @src: input value
 * @n: number of byte to be concatenated
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
char *end = dest;

while (*end != '\0')
{
end++;
}
while (*src != '\0' && n-- > 0)
{
*end++ = *src++;
}
*end = '\0';

return (dest);
}
