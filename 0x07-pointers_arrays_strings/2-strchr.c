#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: char type pointer
 * @c: char type variable
 * Return: char type pointer
 */

char *_strchr(char *s, char c)
{
	char *arr;
	bool flag = false;
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			flag = true;

		if (flag)
			arr = (s + 1);
	}

	if (flag)
		return (arr);
	else
		return ('\0');
}
