#include "main.h"
/**
 * _isdigit - checks if a digit
 * @c: parameter
 * Return: 1 if successful
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}
