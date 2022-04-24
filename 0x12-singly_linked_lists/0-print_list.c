#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
/**
**print_list - produces output according to a format.
*@h:it the argument
*description: produces output according to a format.
*Return:  always 0
*/
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
size_t print_list(const list_t *h)
{
unsigned int size = 0;
while (h != NULL)
{
if(h->str == NULL){
printf("[0] (nil)");
}
size++;
printf("[%d]",h->len);
printf("%s\n",h->str);
h=h->next;
}
return(size);
}