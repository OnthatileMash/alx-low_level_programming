#include "main.h"

/**
 * print_square - function that prints a square
 * @size: int type number
 * Return: void
 */

void print_square(int size)
{
	int a, b;

	if (size == 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}

