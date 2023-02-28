#include "main.h"
/**
 * swap_int - swap values of a and b
 * @a: parameter to be provided
 * @b: parameter to be provided
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
