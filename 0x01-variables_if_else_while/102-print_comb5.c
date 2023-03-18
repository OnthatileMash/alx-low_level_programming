#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c = 48, d = 48;
	int m;

	for (a = 48; a <= 57; a++)
	{
		c = a;
		for (b = 48; b <= 57; b++)
		{
			d = b + 1;
			for (; c <= 57; c++)
			{
				for (; d <= 57; d++)
				{
					putchar((char) a);
					putchar((char) b);
					putchar(' ');
					putchar((char) c);
					putchar((char) d);

					m = a * 1000 + b * 100 + c * 10 + d;
					if (!(m == 63227))
					{
						putchar(',');
						putchar(' ');
					}
				}
				d = 48;
			}
			c = a;
		}
	}

	putchar('\n');
	return (0);
}
