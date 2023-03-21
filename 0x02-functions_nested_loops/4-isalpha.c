#include "main.h"

/**
 * _isalpha - checks if character is an alphabet
 * @c: char type letter
 * Return: 1 (an alphabet), or 0 (not an alphabet)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);

}
