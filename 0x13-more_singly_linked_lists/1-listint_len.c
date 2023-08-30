/**
 * function returning the number of elements in a linked list
 * include lists.h header file
 */

#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked lists
 * @h: Linked list listint_t to traverse therough
 * @h->next: points to the next chuck
 *
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
