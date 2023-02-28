#include "main.h"
/**
 * _strlen - takes a string and return length of string
 * @s: - parameter provided
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

