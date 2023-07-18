/**
 * print_alphabet_x10-main function
 * print 10 times the alphabet in lowercase
 * only use _putchar
 * return: 0 always
 */
#include "main.h"
void print_alphabet_x10(void)
{
	char letter;
	int i;

	i = 0;
	while (i < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
				letter++;
		}
		_putchar('\n');
			i++;
	}
}
