#include "main.h"

/**
 * print_line - prints a straight line using '_'
 * @n: the number of '_' to be printed
 */
void print_line(int n)
{
	int ae;

	if (n > 0)
	{
		for (ae = 0; ae < n; ae++)
			_putchar('_');
	}

	_putchar('\n');
}
