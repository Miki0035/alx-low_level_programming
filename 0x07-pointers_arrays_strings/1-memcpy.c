#include "main.h"
/**
 * _memcpy - copies the src value to dest
 * @dest: parameter for destination
 * @src: parameter for source
 * @n : parameter for size of byte
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int counter;
	for (counter = 0; counter < n; counter++)
	{
		dest[counter] = src[counter];
	}
	return (dest);
}
