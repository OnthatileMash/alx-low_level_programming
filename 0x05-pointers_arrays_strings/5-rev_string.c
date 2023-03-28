#include "main.h"

/**
 * rev_string -  reverses a string.
 * @s: chat type pointer
 * Return: void
 */

void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	for (; *end != '\0'; end++)
		;
	end--;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
