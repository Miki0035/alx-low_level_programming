#include "main.h"
/**
 * _strcpy - copies a string value to a pointer
 * @dest: parameter required for destination pointer
 * @src: parameter required for source string
 * Return:(pointer)
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count] != '\n')
	{
		count++;
	}
	count++;

	int i;

	for (i = 0; i < count; i++)
	{
		*dest[i] = *src[i];
	}
	return (dest);
}

