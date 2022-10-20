#include "lists.h"

/**
 * free_list - frees a linked list memory
 * @head: pointer to the singly linked list.
*/
void free_list(list_t *head)
{
    if(head->next)
        free_list(head->next);

    free(head->str);
    free(head);
}
