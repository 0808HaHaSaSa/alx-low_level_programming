#include "lists.h"
/**
**listint_len - produit une sortie selon un format.
*@h:it the argument
*description: produces output according to a format.
*Return:  always 0
*/
size_t listint_len(const listint_t *h)
{
size_t size = 0;
while (h)
{
h = h->next;
size++;
}
return (size);
}
