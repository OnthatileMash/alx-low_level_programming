#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar((char) a);
	}

	for (a = 97; a <= 102; a++)
	{
		putchar((char) a);
	}

	putchar('\n');
	return (0);
}
