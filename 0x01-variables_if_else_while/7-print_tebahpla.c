#include <stdio.h>

/**
 * main - print the alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	char less;

	for (less = 'z'; less >= 'a'; less--)
		putchar(less);

	putchar("\n");

	return (0);
}

