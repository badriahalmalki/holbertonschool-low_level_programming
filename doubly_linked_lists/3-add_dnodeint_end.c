#include "lists.h"
#include <stdlib.h> /* For malloc and free */
#include <string.h> /* For strdup */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;
	unsigned int len = 0;

	/* Create a new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the string and calculate its length */
	new_node->const int n = strdup(const int n));
	if (new_node->const int n == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (const int n[len])
		len++;
	new_node->len = len;
	new_node->next = NULL;

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Otherwise, traverse to the end of the list and add the new node */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;

	return (new_node);
}
