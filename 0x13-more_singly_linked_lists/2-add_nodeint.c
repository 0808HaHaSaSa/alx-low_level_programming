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
listint_t *element;
element = malloc(sizeof(*element));
if (element == NULL)
{
fprintf(stderr, "erreur\n");
exit(EXIT_FAILURE);
}
element -> n = n;
if (*head = NULL)
{
element -> next = NULL;
}
else
{
element -> next = *head;
}
return (*head);
}
