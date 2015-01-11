//
//  binary_tree.c
//  DataStructure
//
//  Created by Takahiro on 2015/01/10.
//  Copyright (c) 2015 Takahiro Ishikawa. All rights reserved.
//
//  Reference "C Programming Language (2nd Edition)", Brian Kernighan and Dennis Ritchie.
//

#include "binary_tree.h"

/* talloc: make a tnode */
struct tnode *talloc(void)
{
    return (struct tnode *) malloc(sizeof(struct tnode));
}

/* add_tree: add a node with w, at or below p */
struct tnode *add_tree(struct tnode *p, char *w)
{
    int cond;

    if (p == NULL) {    /* a new word has arrived */
        p = talloc();   /* make a new node */
        p->word = strdup(w);
        p->count = 1;
        p->left = p->right = NULL;
    } else if ((cond = strcmp(w, p->word)) == 0)
        p->count++;     /* repeated word */
    else if (cond < 0)  /* less than into left subtree */
        p->left = add_tree(p->left, w);
    else                /* greater than into right subtree */
        p->right = add_tree(p->right, w);
    return p;
}

/* tree_print: in-order print of tree p */
void tree_print(struct tnode *p)
{
    if (p != NULL) {
        tree_print(p->left);
        printf("%4d %s\n", p->count, p->word);
        tree_print(p->right);
    }
}
