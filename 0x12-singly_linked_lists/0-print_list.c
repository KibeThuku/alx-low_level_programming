#include <stdio.h>
#include "lists.h"

/**
 * @lists.h - created header file
 * print_list- The function type prints all the elements of a linked list
 * @h: Pointer points to the list_t list to print
 *
 * Return: Returns the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
