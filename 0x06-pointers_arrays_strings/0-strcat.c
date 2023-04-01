#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @*dest: type char pointer
 * @*src: type char pointer
 * return: char pointer
 */

char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;

	while (dest[length] != '\0')
	{
		++length;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[length] = src[j];
		++length;
	}
	dest[length] = '\0';

	return (dest);
}
