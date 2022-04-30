#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
**free_listint2 - produit une sortie selon un format.
*@head:it the argument
*description: produces output according to a format.
*Return:  always 0
*/
void free_listint(listint_t *head)
{
    listint_t *h,*c;
c=h;
while(c!=NULL)
{
    h=c->next;
    free(c);
    c=h;
}
(head)=NULL;
}
