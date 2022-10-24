#include "lists.h"

/**
 * print_listint - prints elements of a listint_t list.
 * @h: head of the linked list.
 * Return: number of nodes in the list.
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	if (h == NULL)
		return (0);

	ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
