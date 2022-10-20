#include "lists.h"

/**
 * print_list - prints the string inside each node
 * @h: pointer to the singly linked list.
 *
 * Return: number of nodes.
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr)
	{
		if (!ptr->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}

	return (count);
}
