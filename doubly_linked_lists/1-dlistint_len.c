#include "lists.h"

/**
 * dlistint_len - function that returns the number of elem in a list 
 * @h: header of a list
 * 
 * Return: node number
*/

size_t dlistint_len(const dlistint_t *h)
{
    unsigned int i = 0;

    while(h)
    {
        h = h->next;
        i++;
    }
    return (i);
}
