#include "main.h"
/**
 * _isalpha - Return 1 if c is a letter. lowercase or uppercase
 * @c: unsigned int value to be compared with ASCII value
 * Return: 1 if its alphabet otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
