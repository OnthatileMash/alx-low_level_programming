#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: chat type pointer
 * Return: void
 */

void puts_half(char *str)
{
	int length = 0;
	int i;
	const char *ptr = str;
	int half_len;

	/* Determine length of the string */
	while (*ptr != '\0')
	{
		length++;
		ptr++;
	}

	/* Print half of the string */
	ptr = str;
	half_len = (length + 1) / 2;

	for (i = 0; i <= length; i++)
	{
		if (half_len <= i)
		{
			_putchar(*ptr);
		}
		ptr++;
	}

	/* Print a new line */
	_putchar('\n');
}
