#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: THe int to be operated upon
 *
 * Return: returns an unsigneed int value to calling function
 */

int _abs(int x)
{
	if (x > 0 )
	{
		return(x);
	}
	else (x < 0)
	{
		x = x * -1;
		return(x); 
	}
}
