#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: char to be printed
 * Returns 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
