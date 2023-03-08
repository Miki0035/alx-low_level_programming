#include "main.h"
/**
 * _puts_recursion - prints string
 * @s : parameter for string value
 * Returns - void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s++);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
