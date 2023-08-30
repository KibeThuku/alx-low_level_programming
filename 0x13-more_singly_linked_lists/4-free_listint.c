#include "lists.h"

/**
 * @lists.h - Created header file
 * task 4 - function that frees a list
 *
 * free_listint - Function type that frees a linked list
 * @head: listint_t list to be set free
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
