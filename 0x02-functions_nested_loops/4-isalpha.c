/**
 * _isalpha - checks for lowercase alphabet
 * _isalpha(int c) - main function
 * @c: parameter to be checked
 * return: 1 if else c is lowercase or uppercase 0 otherwise
 */
#include "main.h"
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
