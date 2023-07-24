#include <stdio.h>
#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: string input
 * _putchar - prints to stdout
 * Return: string
 */

void rev_string(char *s)
{
	int i;
	int c = 0;

	for (i = 0; i != '\0' ; i++)
		c++;
	for (i = c - 1 ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
