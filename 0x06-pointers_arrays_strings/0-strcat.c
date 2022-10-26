#include "main.h"
#include <string.h>

/**
 * _strcat -> this is a function strcat
 * @dest: first parameter
 * @src: second parameter
 * Return: a character
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
