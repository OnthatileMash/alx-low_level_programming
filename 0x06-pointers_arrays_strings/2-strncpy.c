#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: char type pointer
 * @src: char tpe pointer
 * @n: chsr type pointer
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
