#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: char type pointer
 * @c: char type variable
 * Return: char type pointer
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);

	if (*(s + i) == c)
		return (s + i);
	else
		return ('\0');
}
