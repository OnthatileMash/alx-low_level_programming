#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, counter = 0;

	for (a = 48; a <= 56; a++)
	{
		b = 49 + counter;
		for (; b <= 57; b++)
		{
			putchar((char) a);
			putchar((char) b);
			if (a < 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
		counter++;
	}

	putchar('\n');
	return (0);
}
