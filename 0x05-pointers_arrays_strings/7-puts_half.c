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

	/* Determine length of the string */
	while (*ptr != '\0') 
	{
		length++;
		ptr++;
	}

	/* Print half of the string */
	ptr = str;
	for (i = 0; i <= length; i++) 
	{
		if (length / 2 <= i)
		{
			_putchar(*ptr);
		}
		ptr++;
	}

	/* Print a new line */
	_putchar('\n');
}
