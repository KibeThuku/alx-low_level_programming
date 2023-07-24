#include "main.h"

/**
 * swap_int - function is used to swap numbers
 *
 * @a: input integer 1
 * @b: input integer 2
 * Return: 0 always
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
