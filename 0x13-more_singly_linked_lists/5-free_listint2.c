#include "lists.h"

/**
 * free_listint2 - frees memory from the list and sets HEAD to NULL.
 * @head: head of the linked list.
*/
void free_listint2(listint_t **head)
{
	if (!head || !*head)
		return;

	free_listint2(&((*head)->next));
	free(*head);

	*head = NULL;
}
