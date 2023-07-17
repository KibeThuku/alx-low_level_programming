/**
 * main - main function
 *
 * Return: 0 always
 */
#include <stdio.h>
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar(a + '0');
	putchar('\n');

	return (0);
}
