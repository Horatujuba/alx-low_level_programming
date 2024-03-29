#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @mataa: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **mataa, const int n)
{
 listint_t *new;
 listint_t *temp = *mataa;

 new = malloc(sizeof(listint_t));
 if (!new)
 return (NULL);

 new->n = n;
 new->next = NULL;

 if (*mataa == NULL)
 {
 *mataa = new;
 return (new);
 }

 while (temp->next)
 temp = temp->next;

 temp->next = new;

 return (new);
}
