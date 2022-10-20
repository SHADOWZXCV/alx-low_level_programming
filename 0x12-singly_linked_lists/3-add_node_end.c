#include "lists.h"

/**
 * add_node_end - adds a node to the linked list
 * @head: address of the head of the list
 * @str: string to be added to the node
 * Return: pointer to the node.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int strLen = 0;
	const char *strDup = str;
	list_t *node = malloc(sizeof(list_t));
	list_t *ptr = *head;

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
	node->next = NULL;

	if (!*head)
	{
		*head = node;
		return (node);
	}

	while (ptr->next)
		ptr = ptr->next;

	ptr->next = node;

	return (node);
}
