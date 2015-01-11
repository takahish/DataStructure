//
//  linked_list.c
//  DataStructure
//
//  Created by Takahiro on 2015/01/10.
//  Copyright (c) 2015 Takahiro Ishikawa. All rights reserved.
//

#include "linked_list.h"

/* cealloc: make a nlist */
struct nlist *cealloc(void)
{
    return (struct nlist *) malloc(sizeof(struct nlist));
}

/* add_list: add a nlist with w, at or below p */
struct nlist *add_list(struct nlist *p, char *w)
{
    int cond;

    if (p == NULL) {    /* a new word has arrived */
        p = cealloc();  /* make a new nlist */
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
void list_print(struct nlist *p)
{
    if (p != NULL) {
        printf("%4d %s\n", p->count, p->word);
        list_print(p->next);
    }
}