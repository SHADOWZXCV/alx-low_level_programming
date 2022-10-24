#include "lists.h"
#define NODE_BEFORE_POSITION 1
/**
 * insert_nodeint_at_index - inserts a node at a given index.
 * @head: pointer to head of the linked list.
 * @idx: index of the node, starting with 0.
 * @n: the data of the node.
 * Return: pointer to the node, otherwise, NULL is returned.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *holder, *newNode;

	if (!head || !*head)
		return (NULL);

	ptr = *head;
	newNode = malloc(sizeof(listint_t));

	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}

	while (ptr && idx != NODE_BEFORE_POSITION)
	{
		ptr = ptr->next;
		idx--;
	}

	if (idx != NODE_BEFORE_POSITION)
	{
		free(newNode);
		return (NULL);
	}

	holder = ptr->next;
	ptr->next = newNode;
	newNode->next = holder;
	newNode->n = n;

	return (newNode);
}
