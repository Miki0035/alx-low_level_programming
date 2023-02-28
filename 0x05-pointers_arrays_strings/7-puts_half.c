#include "main.h"
/**
 * puts_half - prints half a string
 * @str: parameter required
 * Return: 0
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\n')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		i /= 2;
		while (str[i] != '\n')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		int j = (i - 1) / 2;
		
		while (str[j] != '\n')
		{
			_putchar(str[j]);
			j++;
		}
	}
	_putchar('\n');
}
	 
