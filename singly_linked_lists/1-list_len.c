#include "lists.h"

/**
* list_len - count all element of a list
*@h: input for start counting
*/

size_t list_len(const list_t *h)
{
    size_t i = 0;

    while (h != NULL)
    {
        i++;
        h = h->next;
    }
    return (i);
}