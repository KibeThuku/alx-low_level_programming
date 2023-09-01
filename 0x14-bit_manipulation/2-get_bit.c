#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index in a decimal number
 * @n: This is the number to search
 * @index: Shows the index of the bit
 *
 * Return: Value of the bit or -1 if failed
 */


int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
