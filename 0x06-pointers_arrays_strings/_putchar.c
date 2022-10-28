#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: char to be printed
 *
 * Returns: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
