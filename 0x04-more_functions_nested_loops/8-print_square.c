#include "main.h"

/**
 * print_square - function that prints a square
 * @size: int type number
 * Return: void
 */

void print_square(itn size)
{
	int a, b;

	for (a = 0; a <= size; a++)
		for (b = 0; b <= size; b++)
			_putchar('#');
	_putchar('\n');
}
