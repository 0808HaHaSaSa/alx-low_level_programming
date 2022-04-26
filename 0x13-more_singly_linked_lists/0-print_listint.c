#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
/**
**print_listint - produit une sortie selon un format.
*@h:it the argument
*description: produces output according to a format.
*Return:  always 0
*/
size_t print_listint(struct listint_s *h)
{
size_t size = 0;
if (h == NULL)
{
printf("linked list is empty");
}
struct listint_s *ptr = NULL;
ptr = h ;
while (h != NULL)
{
size++;
printf("%d\n", ptr->n);
ptr = ptr->next;
}
return (size);
}
