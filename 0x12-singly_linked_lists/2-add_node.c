#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
/**
**add_node - produces output according to a format.
*@str:it the argument
*description: produces output according to a format.
*Return:  always 0
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *ele;
ele = malloc(sizeof(*ele));
if(ele == NULL)
{
fprintf(stderr,"errer\n");
exit (EXIT_FAILURE);
}
ele->str = *str;
ele->
if(head == NULL)
{
ele->next = NULL;
}
else{
ele->next = *head;
}
return (ele);
}
