#include "main.h"
#include <string.h>

/**
 * print_rev - prints string in reverse followed by a new line
 * @s: string
 */
void print_rev(char *s)
{
	int d, len;

	len = strlen(s);

	for (d = len - 1; d >= 0; d--)
		_putchar(s[d]);
	_putchar('\n');
}
