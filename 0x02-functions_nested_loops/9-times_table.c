#include "main.h"
/**
 * times_table - print the 9 times table
 * Return: 0 (Always Success)
 */
void times_table(void)
{
	for (int i = 0; i <= 9; i++)
	{
		for(int j = 0; j<=9; j++)
		{
			int c = i * j;
			_putchar(c + ',');
		}
		_putchar('\n');
	}
}
