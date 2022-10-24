#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of the linked list.
 * @index: index of the node, starting with 0.
 * Return: pointer to the node, otherwise, NULL is returned.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;

	if (!head)
		return (NULL);

	ptr = head;

	while (ptr && index != 0)
	{
		ptr = ptr->next;
		index--;
	}

	if (index != 0)
		return (NULL);

	return (ptr);
}
