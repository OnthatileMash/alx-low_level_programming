#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: int type number
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int hash;
	int count;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			count = size - i;
			while (count--)
				_putchar(' ');
			hash = i;
			while (hash--)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
