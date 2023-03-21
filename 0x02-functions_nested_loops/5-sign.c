#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: char type letter
 * Return: 1 (+ greater than zero), or 0 (0 zero), or -1 (- less than zero)
 */

int print_sign(int n)
{
	if (n >= 48)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('-');
		return (0);
	}
	else
	{
		_putchar('0');
		return (-1);
	}
}
