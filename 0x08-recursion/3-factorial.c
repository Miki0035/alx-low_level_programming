#include "main.h"
/**
 * factorial - give factorial of a number
 * @n : parameter for number
 * Return: factorial of integer
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
