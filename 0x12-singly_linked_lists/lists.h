#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
size_t list_len(const list_t *h);
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
#endif

