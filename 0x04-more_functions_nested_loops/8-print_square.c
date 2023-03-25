#include "main.h"

/**
 * print_square - function that prints a square
 * @size: int type number
 * Return: void
 */

void print_square(int size)
{
	int a, b;

	for (a = 0; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
			_putchar('#');
		_putchar('\n');
	}
}

