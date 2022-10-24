#include "lists.h"

/**
 * free_listint - frees memory from the list.
 * @head: head of the linked list.
*/
void free_listint(listint_t *head)
{
	if (!head)
		return;

	free_listint(head->next);
	free(head);
}
