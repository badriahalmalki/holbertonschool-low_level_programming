#include "lists.h"
#include <stdlib.h> /* for malloc and free */
#include <string.h>

/**
 * free_list - Frees a linked list.
 * @head: Pointer to the head of the list.
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current->str); /* Free the string */
		free(current);
		current = next_node;
	}
}
