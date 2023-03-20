#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets in lowercase ten times
 *
 * Return: All good
 */

void print_alphabet_x10(void)
{
	int a;
	int i;

	for (a = 0; a < 10; a++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar((char) i);
		}
		_putchar('\n');
	}
}
