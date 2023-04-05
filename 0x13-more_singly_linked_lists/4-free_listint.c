#include "lists.h"

/**
 * free_listint - frees a linked list
 * @mataa: listint_t haqamu
 */
void free_listint(listint_t *mataa)
{
 listint_t *temp;

 while (mataa)
 {
 temp = mataa->next;
 free(mataa);
 mataa = temp;
 }
}
