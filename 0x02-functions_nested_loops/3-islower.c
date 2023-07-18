/**
 * _islower-main function
 * @c: arguement to be checked
 * check for lower case characters
 * retuns: 1 if lowercase
 * returns:0 if otherwise
 */

#include "main.h"
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
