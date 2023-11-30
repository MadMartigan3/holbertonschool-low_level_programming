#include "lists.h"

/**
 * free_dlistint - function that free a list 
 * @h: pointer header
*/

void free_dlistint(dlistint_t *head)
{
    dlistint_t *tmp;

    while (head)
    {
        tmp = head;
        head = head->next;
        
        free(tmp);
    }
}
