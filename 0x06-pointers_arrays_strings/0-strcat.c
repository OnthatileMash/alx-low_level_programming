#include "main.h"

/**
 * _strcat -  function that concatenates two strings.
 * @*dest: type char pointer
 * @*src: type char pointer
 * return: char pointer
 */

char *_strcat(char *dest, char *src)
{
	char *s;
	while (*dest != '\0') dest++;

	s = src;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
	}
	src = s;

	dest = '\0';

	return (dest);
}
