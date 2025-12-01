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
	unsigned int len = 0;

	/* Calculate string length */
	if (str != NULL)
	{
		while (str[len] != '\0')
			len++;
	}

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL); /* Memory allocation failed */
	}

	/* Duplicate the string and handle potential failure */
	if (str != NULL)
	{
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node); /*Free the allocated node memory*/
			return (NULL); /* String duplication failed */
		}
	}
	else
	{
		new_node->str = NULL;
	}

	new_node->len = len;
	new_node->next = NULL; /* Point new node's next to the end */
	*head = new_node;       /* Update head to point to the new node */

	return (new_node);
}
