#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * starting with the first character, followed by a new line.
 * @s: chat type pointer
 * Return: integer
 */

void puts2(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		if (length % 2 == 0)
		{
			_putchar(s[length]);
		}
		length++;
	}
	_putchar('\n');
}
