/* task 0.0 */

#include "main.h"

/**
 * @main.h - created header file
 *
 * binary_to_uint - this function type converts a binary number to unsigned int
 * @b: this is the string containing the binary number
 *
 * Return: the converted number or 0 if b != 0 or 1 or NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
