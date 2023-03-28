#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: chat type pointer
 * Return: void
 */

void print_rev(char *s)
{
	int length = 0;
	const char *ptr = s;

	while (*ptr++)
		length++;

	ptr = s + length - 1;
	while (length--)
		_putchar(*ptr--);

	_putchar('\n');
}
