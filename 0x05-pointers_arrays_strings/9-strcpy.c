#include "main.h"
/**
 * _strcpy - copies a string value to a pointer
 * @dest: parameter required for destination pointer
 * @src: parameter required for source string
 * Return:(pointer)
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}

