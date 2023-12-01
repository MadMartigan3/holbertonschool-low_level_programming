#include "lists.h"

/**
* insert_dnodeint_at_index - function that insert a new node 
*@h: header pointer
*@idx: input index add aa new node
*@n: input data for new node 
*
*Return: the node at index
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *tmp;
	unsigned int count = 0;

    newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

/**
*le code initialise les pointeurs de données (n), précédent (prev) 
*et suivant (next) du nouveau nœud.
*/
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (h == NULL)
		return (newnode);
/**
*Insertion au début (idx == 0) : 
*Si l'index est 0, le nouveau nœud est inséré au début de la liste.
*/
	if (idx == 0)
	{
		newnode->next = (*h);
		if ((*h) != NULL)
			(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}

/**Insertion à un index spécifique : 
*Le code parcourt ensuite la liste jusqu'à atteindre l'index spécifié ou la fin de la liste. 
*Une fois l'index correct trouvé, le nouveau nœud est inséré dans la liste.
*/
    tmp = *h;
	while (tmp != NULL)
	{
		count++;
		if (count == idx)
		{
			newnode->prev = tmp;
			newnode->next = tmp->next;

			if (tmp->next != NULL)
				tmp->next->prev = newnode;
			tmp->next = newnode;
			return (newnode);
		}
		tmp = tmp->next;
	}
	free(newnode);
	return (NULL);
}
