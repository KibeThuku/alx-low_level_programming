/**
 * include created header file lists.h
 */

#include "lists.h"

/**
 * print_listint - The function prints all the elements of a linked list
 * @h: This is the function type of linked list listint_t to be printed
 * @h->n:means pointing to data chunk
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
