#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;
	int count;
	int a;

	for (a = 0; a <= 9; i++)
	{
		count = 0;
		i = 48;
		j = 48;
		while (count <= 14)
		{

			_putchar((char) i);

			if (count >= 9)
			{
				i = 0;
				_putchar((char) j);
				j++;
			}
			else
				i++;
			count++;
		}
		_putchar('\n');
	}
}
