#include "lists.h"

/**
 * @lists.h - Header file created
 *
 * pop_listint - Function type that deletes the head node of a linked list
 * @head: Pointer pointing  to the first element in the linked list
 *
 * Return: Data inside the elements that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
