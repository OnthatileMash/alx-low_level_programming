#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @s: chat type pointer
 * Return: integer
 */

void _puts(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		_putchar(s[length]);
		length++;
	}
	_putchar('\n');
}
