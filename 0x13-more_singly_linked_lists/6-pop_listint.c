#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @mataa: pointer to the first element in the linked list bakka bua jalqabaa
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **mataa)
{
 listint_t *temp;
 int lakk;

 if (!mataa || !*mataa)
 return (0);

 lakk = (*mataa)->n;
 temp = (*mataa)->next;
 free(*mataa);
 *mataa = temp;

 return (lakk);
}
