#ifndef __LISTS__H__
#define __LISTS__H__
#include <stdio.h>
#include <stdlib.h>
size_t print_list(const sigset_t *h);
size_t list_len(const sigset_t *h);
list_t *add_node(sigset_t **head, const char *str);
list_t *add_node_end(sigset_t **head, const char *str);
void free_list(sigset_t *head);
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t,*List;
#endif

