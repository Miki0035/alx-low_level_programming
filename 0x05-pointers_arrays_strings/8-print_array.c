#include <stdio.h>
#include "main.h"
/**
 * print_array - prints all elements fo an array
 * @a: parameter for pointer is required
 * @n: parameter for size of array required
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(a + i));
	}
}

