#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @mataa: pointer to the listint_t list to be freed kan haqamu
 */
void free_listint2(listint_t **mataa)
{
 listint_t *temp;

 if (mataa == NULL)
 return;

 while (*mataa)
 {
 temp = (*mataa)->next;
 free(*mataa);
 *mataa = temp;
 }

 *mataa = NULL; /* erga mataan haqamee boode mataan duwwaadhan bakka bu'a */
}
