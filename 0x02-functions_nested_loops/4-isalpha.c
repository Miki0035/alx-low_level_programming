#include "main.h"
/**
 * isalpha.c - checks if input is letter or not if letter returns 1
 * else returns 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
