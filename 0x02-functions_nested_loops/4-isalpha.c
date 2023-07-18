/**
 * _isalpha - main function
 * _isalpha - checks for alphabetic order
 * 'c': is a lower case or upper case
 * returns 1
 * else return 0
 */

#include "main.h"
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
