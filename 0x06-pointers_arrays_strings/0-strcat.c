#include "main.h"
/**
 * _strcat - concate two strings
 * @dest: parameter for dest string
 * @src: parameter for source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	while (*(dest) != '\0')
	{
		dest++;
	}
	while (*(src) != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}
