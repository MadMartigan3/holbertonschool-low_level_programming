#include "lists.h"

/**
 * print_dlistint - function that print all the elements of a list
 * @h: header of a list 
 * 
*/

size_t print_dlistint(const dlistint_t *h)
{
    int i = 0;

    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
        i++;
    }
    return (i);
}
