#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - The function type adds a new node at the beginning of a linked list
 * @head: The double pointer points to the list_t list
 * @str: A new string to be added in the node
 *
 * Return: Returns the address of the new element or Returns NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}