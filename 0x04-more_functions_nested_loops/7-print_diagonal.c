#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: numbers of '\' to be printed
 */
void print_diagonal(int n)
{
	int f, g;

	if (n <= 0)
		_putchar('\n');

	for (f = 0; f < n; f++)
	{
		for (g = 0; g < f; g++)
			_putchar('');

		_putchar('\\');
		_putchar('\n');
	}
}
