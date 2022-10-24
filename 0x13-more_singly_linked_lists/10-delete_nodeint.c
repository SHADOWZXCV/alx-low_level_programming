#include "lists.h"
#define NODE_BEFORE_POSITION 1
/**
 * delete_nodeint_at_index - deletes a node at a given index.
 * @head: pointer to head of the linked list.
 * @index: index of the node, starting with 0.
 * Return: 1 if succeeded, otherwise -1.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *holder;

	if (!head || !*head)
		return (-1);

	ptr = *head;

	if (index == 0)
	{
		holder = (*head)->next;
		free(*head);
		*head = holder;
	} else
	{
		while (ptr && index != NODE_BEFORE_POSITION)
		{
			ptr = ptr->next;
			index--;
		}

		if (index != NODE_BEFORE_POSITION || !ptr)
			return (-1);

		/* Get the node after the node to be deleted */
		holder = ptr->next->next;
		free(ptr->next);
		ptr->next = holder;
	}

	return (1);
}
