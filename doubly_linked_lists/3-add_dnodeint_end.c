#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: header list
 * @n: element add
 * 
 * Return: new element
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new, *tmp;

    tmp = (*head);

    new = malloc(sizeof(dlistint_t));

    if (new == NULL)
    {
        return (NULL);
    }
    new->n = n;
    new->next = NULL;

    if ((*head) == NULL)
    {
        *head = new;
        new->prev = NULL;

        return (new);
    }

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = new;
    new->prev = tmp;

    return (new);

}
