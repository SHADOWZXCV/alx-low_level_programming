#include "lists.h"

/**
 * list_len - returns the number of elements in linked list
 * @h: pointer to the singly linked list.
 *
 * Return: number of elements.
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
