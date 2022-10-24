#include "lists.h"

/**
 * pop_listint - removes the head of the list, and returns its data.
 * @head: pointer to head of the linked list.
 * Return: data of the popped node.
*/
int pop_listint(listint_t **head)
{
	int data = (*head)->n;
	listint_t *afterHead = (*head)->next;

	if (!head || !*head)
		return (0);

	free(*head);
	*head = afterHead;

	return (data);
}
