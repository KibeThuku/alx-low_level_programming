#include "main.h"

/**
 * print_numbers - main function printing numbers from 0 to 9
 *
 * _putchar - printing function
 *
 * Return: 0 always
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
