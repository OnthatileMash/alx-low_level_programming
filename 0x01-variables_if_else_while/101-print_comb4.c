#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, counter = 0;

	for (a = 48; a <= 55; a++)
	{
		b = 49 + counter;
		for (; b <= 56; b++)
		{
			c = 50 + counter;
			for (; c <= 57; c++)
			{
				putchar((char) a);
				putchar((char) b);
				putchar((char) c);
				if (a < 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		counter++;
	}

	putchar('\n');
	return (0);
}
