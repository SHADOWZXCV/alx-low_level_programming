#include "lists.h"

/**
 * listint_len - returns the number of elements in the list.
 * @h: head of the linked list.
 * Return: number of nodes in the list.
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}

	return (count);
}
