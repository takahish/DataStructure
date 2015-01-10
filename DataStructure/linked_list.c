//
//  linked_list.c
//  DataStructure
//
//  Created by Takahiro on 2015/01/10.
//  Copyright (c) 2015 Takahiro Ishikawa. All rights reserved.
//

#include "linked_list.h"

/* cealloc: make a cell */
struct cell *cealloc(void)
{
    return (struct cell *) malloc(sizeof(struct cell));
}

/* add_list: add a cell with w, at or below p */
struct cell *add_list(struct cell *p, char *w)
{
    int cond;

    if (p == NULL) {    /* a new word has arrived */
        p = cealloc();  /* make a new cell */
        p->word = strdup(w);
        p->count = 1;
        p->next = NULL;
    } else if ((cond = strcmp(w, p->word)) == 0)
        p->count++;     /* repeated word */
    else                /* called add_list recursivly */
        p->next = add_list(p->next, w);
    return p;
}

/* list_print: in-order print of list p */
void list_print(struct cell *p)
{
    if (p != NULL) {
        printf("%4d %s\n", p->count, p->word);
        list_print(p->next);
    }
}