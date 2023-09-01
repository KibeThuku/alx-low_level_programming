#include "main.h"

/**
 * set_bit - This function type sets a bit of a given index to 1
 * @n: This pointer points to the number to change
 * @index: The index of the bit to set to 1
 *
 * Return: 1 on  success -1 if  fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
