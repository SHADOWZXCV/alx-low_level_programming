#include "lists.h"

/**
 * pop_listint - removes the head of the list, and returns its data.
 * @head: pointer to head of the linked list.
 * Return: data of the popped node.
*/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *afterHead;

	if (!head || !*head)
		return (0);

	afterHead = (*head)->next;
	data = (*head)->n;

	free(*head);
	*head = afterHead;

	return (data);
}
