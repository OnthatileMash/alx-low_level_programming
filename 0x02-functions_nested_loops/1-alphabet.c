#include "main.h"

/**
 * print_alphabet - Prints alphabets in lowercase
 *
 * Return: All good
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar((char) i);
	}
	_putchar('\n');
}
