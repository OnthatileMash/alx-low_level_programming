#include "main.h"

/**
 * print_times_table -  function that prints the n times table, starting with 0.
 * @n - int type number
 * Return: void
 */

void print_times_table(int n) 
{
	int t, i;
	int sum = 0;

	if (n <= 15 && n >= 0)
	{
		for (t = 0; t <= n; t++)
		{
			_putchar('0');
			for (i = 1; i <= n; i++) 
			{
				sum = t * i;

				if (sum <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((char) (48 + sum));
				}
				else 
				{
					if (sum <= 99)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar((char) (48 + (sum / 10)));
						_putchar((char) (48 + (sum % 10)));
					}
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar((char) (48 + (sum / 100)));
						_putchar((char) (48 + (sum / 10 % 10)));
 						_putchar((char) (48 + (sum % 10)));
					}
				}
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
