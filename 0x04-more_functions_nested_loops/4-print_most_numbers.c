#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9.
 * do not prints 2 & 4.
 *
 * Reutrn: Its a void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		if (!(c == 50 || i == 52))
			_putchar((char) i);

	_putchar('\n');
}
