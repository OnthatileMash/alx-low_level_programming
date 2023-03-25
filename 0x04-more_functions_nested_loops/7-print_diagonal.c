#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: int type number
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int count;

	if (!(n <= 0))
	{
		if (n == 1)
		{
			_putchar('\\');
			_puthcar('\n');
		}
		else
			for (i = 0; i < n; i++)
			{
				count = 0;

				while (count < i)
				{
					_putchar(' ');
					count++;
				}
				_putchar('\\');
				_putchar('\n');
			}
	}
	else
		_putchar('\n');
}
