#include "main.h"
/**
 * puts2 - print every other character in string starting from the 1st
 * @str: parameter required
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (int j = 0; j < i; j + 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

