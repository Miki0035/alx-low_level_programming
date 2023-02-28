#include "main.h"
/**
 * puts2 - print every other character in string starting from the 1st
 * @str: parameter required
 * Return: 0
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		 i++;
	}

	_putchar('\n');
}

