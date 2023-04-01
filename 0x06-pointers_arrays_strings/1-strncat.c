#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: type char pointer variable
 * @src: type char pointer variable
 * @n: type int variable
 * Return: char pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, src_len;

	dest_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (src_len = 0; src_len < n; src_len++)
	{
		dest[dest_len] = src[src_len];
		dest_len++;
	}

	dest[dest_len] = '\0';
	return (dest);
}
