#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout [aacts the printf]
 * @c: The character to be printed
 *
 * Return: 1 on success if failed -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

