#include "main.h"
/**
 * _pow_recursion - will return x the power of y
 * @x: parameter for number to be raised
 * @y: parameter by how much to be raised
 * Return: integer value
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, (y - 1)));
}
