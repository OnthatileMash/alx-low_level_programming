#include "main.h"

/**
 * _islower - checks if character is a lower case
 * @c: char type letter
 * Return: 1 (lowercase) or 0 (not a lowercase)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
