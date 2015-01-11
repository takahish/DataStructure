//
//  hash_table.c
//  DataStructure
//
//  Created by Takahiro on 2015/01/11.
//  Copyright (c) 2015 Takahiro Ishikawa. All rights reserved.
//

#include "hash_table.h"

/* hash: form hash value for string s */
unsigned hash(char *s)
{
    unsigned hashval;

    for (hashval = 0; *s != '\0'; s++)
        hashval = *s + 31 * hashval;
    return hashval % HASHSIZE;
}

/* add_hash: add a hashtab with w */
void add_hash(char *w)
{
    unsigned hashval;

    hashval = hash(w);
    hashtab[hashval] = add_list(hashtab[hashval], w); // add_list: add a nlist with w
}

/* tree_print: in-order print of hashtab */
void hash_print(void)
{
    int i;
    struct nlist *np;

    for (i = 0; i < HASHSIZE; i++)
        if ((np = hashtab[i]) != NULL)
            list_print(np); // list_print: in-order print of list
}