#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of the list.
 * @head: pointer to the head of the linked list.
 * @n: the number to store in the new node.
 * Return: pointer to the new node.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (newNode == NULL || head == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (!*head)
		*head = newNode;
	else
	{
		while (ptr->next)
			ptr = ptr->next;

		ptr->next = newNode;
	}

	return (newNode);
}
