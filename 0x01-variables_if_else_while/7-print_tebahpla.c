/**
 * main - main function
 *
 * Return: 0 always
 */
#include <stdio.h>
int main(void)
{
	char b;

	for (b = 'z'; b >= 'a'; b--)
		putchar(b);
	return (0);
}
