#include "lists.h"

/**
 * add_nodeint - adds a node to the beggining of the list.
 * @head: pointer to the head of the linked list.
 * @n: the number to store in the new node.
 * Return: pointer to the new node.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL || head == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
