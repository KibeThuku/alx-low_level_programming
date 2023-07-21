#include "main.h"

/**
 * _isupper - Main function checking for uppercase character
 *
 * @c: input character
 *
 * Return: 1 if true 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
