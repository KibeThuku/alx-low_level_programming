/**
 * print_alphabet-main function
 * return: 0 always
 * print lowercase alphabets upto z
 */
#include "main.h"
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
