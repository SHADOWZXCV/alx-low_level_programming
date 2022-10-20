#include "lists.h"

/**
 * add_node - adds a node as a head to the linked list
 * @head: address of the head of the list
 * @str: string to be added to the node
 * Return: pointer to the node.
*/
list_t *add_node(list_t **head, const char *str)
{
	int strLen = 0;
	const char *strDup = str;
	list_t *node = malloc(sizeof(list_t));

	if (head == NULL || node == NULL)
	{
		free(node);
		return (NULL);
	}

	while (*strDup)
	{
		strLen++;
		strDup++;
	}

	node->len = strLen;
	node->str = strdup(str);
	node->next = *head;
	*head = node;

	return (node);
}
