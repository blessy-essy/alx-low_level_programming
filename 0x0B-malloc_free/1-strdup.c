#include "main.h"
#include <stdio.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: The string to duplicate.
 *
 * Return: a pointer to the duplicated string (Success) or NULL for (Error)
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup_str[i] = str[i];

	dup_str[len] = '\0';

	return (dup_str);
}
