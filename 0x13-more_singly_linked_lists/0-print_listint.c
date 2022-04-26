#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;
/**
**print_listint - produit une sortie selon un format.
*@h:it the argument
*description: produces output according to a format.
*Return:  always 0
*/
size_t print_listint(const struct listint_t *h)
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
