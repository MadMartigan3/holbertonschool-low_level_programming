#include "lists.h"

/**
 * get_dnodeint_at_index - function that return the nth node of a list
 *@head: header list 
 *@index: index of the node
 *
 *Return: nth node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *new;
    unsigned int i = 0;

    new = head;

    if (head == NULL)
    {
        return (NULL);
    }
    while (new != NULL)
    {
        if (i == index)
        {
            return (new);
        }
        i++;
        new = new->next;
    }
    return (NULL);
}
