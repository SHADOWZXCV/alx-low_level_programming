#include "lists.h"

/**
 * sum_listint - returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: head of the linked list.
 * Return: the sum of all the data (n) of a listint_t linked list.
*/
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (!head)
		return (0);

	ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}


	return (sum);
}
