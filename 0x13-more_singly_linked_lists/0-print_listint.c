#include <stdio.h>
#include <lists.h>
#include <string.h>
#include <stdlib.h>
/**
**print_listint - produit une sortie selon un format.
*@h:it the argument
*description: produces output according to a format.
*Return:  always 0
*/
size_t print_listint(const listint_t *h)
{
size_t size = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
size++;
}
return (size);
}
