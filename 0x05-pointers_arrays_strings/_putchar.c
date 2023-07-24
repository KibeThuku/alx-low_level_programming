#include <unistd.h>

/**
 * _putchar - main function
 *
 * @c: the character printed out
 *
 * return: 1 on success -1 if fail
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
