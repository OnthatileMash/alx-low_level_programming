#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9.
 *
 * Return: Its a void
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		_putchar((char) i);
	_putchar('\n');
}
