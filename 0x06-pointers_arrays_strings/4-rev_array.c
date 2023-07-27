#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers.
 * @a: The array of integers too be reversed.
 * @n: The number of elements
 *
 * Return: reverse
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
