#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
/**
**list_len - produces output according to a format.
*@h:it the argument
*description: produces output according to a format.
*Return:  always 0
*/
size_t list_len(struct list_s *h)
{
unsigned int size = 0;
if (h != NULL)
while (h != NULL)
{
size++;
h = h->next;
}
return (size);
}
