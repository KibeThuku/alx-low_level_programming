#include "main.h"

/**
 * get_endianness - This function type  checks if a machine is little or big end
 * Return: 0 for big endian, 1 for littleedian 
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;
	return (*c);
}
