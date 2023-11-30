#include "lists.h"

/** 
* sum_dlistint - function that print the sum all element of dlistint
*@head: header list 
*
* Return: sum of list
*/

int sum_dlistint(dlistint_t *head)
{
    dlistint_t *new;
    int sum = 0;

    new = head;

    if (head == NULL)
    {
        return (sum);
    }
    while (new != NULL)
    {
        sum += new->n;
        new = new->next;
    }
    return (sum);
}
