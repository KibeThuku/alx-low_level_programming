#include <main.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * c- the character printed out
 *
 * return: 1 on success
 * return: -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
