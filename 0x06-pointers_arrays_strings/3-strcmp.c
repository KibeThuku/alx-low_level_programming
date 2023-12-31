#include "main.h"

/**
 * _strcmp - compares 2 strings
 *
 * @s1: input 1
 * @s2: input 2
 *
 * Return:comparison
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
