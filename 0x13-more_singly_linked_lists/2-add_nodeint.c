#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
**add_nodeint - produit une sortie selon un format.
*@head:it the argument
*@n:it the argument
*description: produces output according to a format.
*Return:  always 0
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
*head = malloc(sizeof(*head));
if (*head == NULL)
{
    fprintf(stderr, "erreur\n");
    exit(EXIT_FAILURE);
}
(*head) -> n = n;
if (head)
{
(*head) -> next = NULL;
}
else
{
(*head) -> next = head;
}
return (*head);
}
