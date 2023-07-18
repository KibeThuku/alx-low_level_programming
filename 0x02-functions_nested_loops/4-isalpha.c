/**
 * _isalpha - checks for lowercase alphabet
 * @c: parameter to be checked
 * return: 1 if else c is lowercase or uppercase
 * return: 0 otherwise
 */
#include "main.h"
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
