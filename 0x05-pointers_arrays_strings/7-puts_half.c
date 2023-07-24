#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of the characters on a string
 * @str: input of the string
 */

void puts_half(char *str)
{
	int i;
	int n;
	int c;

	for (i = 0 ; str[i] != '\0' ; i++)
		c++;
	n = (c - 1) / 2;

	for (i = n + 1 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
