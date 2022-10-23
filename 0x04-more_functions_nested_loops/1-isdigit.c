#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @c: int to be checked
 * Returns: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
