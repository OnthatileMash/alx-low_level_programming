#include "main.h"

/**
 * swap_int -  swaps the values of two integers.
 * @a: int tpye pointer
 * @b: int type pointer
 * Reutrn: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
