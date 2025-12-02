#include "lists.h"
#include <stdlib.h> /* For malloc and free */
#include <string.h> /* For strdup */

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: Double pointer to the head of the list
 * @str: String to be added to the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	unsigned int len = 0;

	/* Create a new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the string and calculate its length */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[len])
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

