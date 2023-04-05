#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @p: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *p)
{
 size_t var = 0;

 while (p)
 {
 printf("%d\n", p->n);
 var++;
 p = p->next;
 }

 return (var);
}
