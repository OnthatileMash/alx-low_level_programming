#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @c: int type number
 * Return: prints the last digit of a number.
 */

int print_last_digit(int c)
{
	if (c < 0)
	{
		c = -1 * (c % 10);
		_putchar(c + '0');
		return (c);
	}
	else
	{
		c %= 10;
		_putchar(c + '0');
		return (c);
	}
}
