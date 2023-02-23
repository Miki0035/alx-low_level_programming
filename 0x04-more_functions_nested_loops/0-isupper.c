#include "main.h"
/**
 * Function checks if c is an uppercase letter
 * return 1 if c is uppercase letter
 * return 0 if c is not an uppercase letter
 */

int _isupper(int c)
{
	if ( c >= 'A' && c <= 'Z' )
		return (1);
	return (0);
}
