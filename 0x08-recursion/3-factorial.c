#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number.
 * @n: int type variable
 * Return: int
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else
		if (n > 0)
			return (n * factorial(n - 1));
		else
			return (-1);
}

int main(void)
{
    int r;

    r = factorial(1);
    printf("%d\n", r);
    r = factorial(5);
    printf("%d\n", r);
    r = factorial(10);
    printf("%d\n", r);
    r = factorial(-1024);
    printf("%d\n", r);
    return (0);
}
