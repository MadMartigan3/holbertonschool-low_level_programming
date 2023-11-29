#include "lists.h"

/**
* print_list - prints all element from a list
*@h: link to the list 
*/

size_t print_list(const list_t *h)
{
    size_t i = 0;

    while (h != NULL)
    {
        i++;
        if (h->str != NULL)
            printf("[%u] %s\n", h->len, h->str);
        else
            printf("[0] (nil)\n");
        h = h->next;
    }
    return (i);
}