#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: c if the character is found
 * NULL - if the character is not found
 */

char *_strchr(char *s, char c)
{
int i = 0;

for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
