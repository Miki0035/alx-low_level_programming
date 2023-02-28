#include "main.h"
/**
 * _puts - prints a string followed by new line
 * @str: parameters provided
 * Returns: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '/0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
