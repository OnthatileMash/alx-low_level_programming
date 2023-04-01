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
					_putchar(sum + '0');;
				}
				else 
				{
					if (sum <= 99)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar((sum / 10) + '0');
						_putchar((sum % 10) + '0');
					}
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar((sum / 100) + '0');
						_putchar((sum / 10 % 10) + '0');
 						_putchar((sum % 10) + '0');
					}
				}
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
