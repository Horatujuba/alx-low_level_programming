#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @mataa: first node in the linked list isaa jalqabaa
 * @agarsiftu: index of the node to return agarsiftu ishee baatu
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *mataa, unsigned int agarsiftu)
{
 unsigned int i = 0;
 listint_t *temp = mataa;

 while (temp && i < agarsiftu)
 {
 temp = temp->next;
 i++;
 }

 return (temp ? temp : NULL);
}
