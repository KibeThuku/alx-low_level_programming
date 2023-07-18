
/* print_alphabet-main function
 * print alphabet in lower case
 * return: 0 always
 */
#include "main.h"
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
