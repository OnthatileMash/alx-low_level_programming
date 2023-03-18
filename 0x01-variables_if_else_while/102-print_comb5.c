#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d = 49;
	int count = 0;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			if (b == 57)
				count++;

			c = 48 + count;
			d = 48 + ((char) b);
			for (; c <= 57; c++)
			{
				for (; d < 57; d++)
				{
					putchar((char) a);
					putchar((char) b);
					putchar(' ');
					putchar((char) c);
					putchar((char) d);
					if (a < 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				d = 48;
			}
		}
	}

	putchar('\n');
	return (0);
}
