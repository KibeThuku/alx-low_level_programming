#include "main.h"

/**
 * print_rev - prints string characters in reverse
 * @s: string input
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int i;
	int sleng = 0;

	while (*s != '\0')
	{
		sleng++;
		s++;
	}
	s--;
	for (i = sleng; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
