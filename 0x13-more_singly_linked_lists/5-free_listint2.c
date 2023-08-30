#include "lists.h"

/**
 * @list.h - created header file
 * task 5 - free a list
 *
 * free_listint2 - Function type that frees a linked list
 * @head: Pointer to function listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}

