#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lstDigit_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lstDigit_n = n % 10;
	if (lstDigit_n < 0)
		lstDigit_n *= -1;

	printf("Last digit of %d is %d", n, lstDigit_n);

	if (lstDigit_n > 5)
	{
		printf(" and is gretaer than 5\n");
	}
	else
	{
		if (lstDigit_n == 0)
		{
			printf(" and is 0\n");
		}
		else
		{
			printf(" and is less than 6 and not 0\n");
		}
	}
	return (0);
}
