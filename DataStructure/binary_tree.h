//
//  binary_tree.h
//  DataStructure
//
//  Created by Takahiro on 2015/01/10.
//  Copyright (c) 2015 Takahiro Ishikawa. All rights reserved.
//
//  Reference "C Programming Language (2nd Edition)", Brian Kernighan and Dennis Ritchie.
//

#ifndef __DataStructure__binary_tree__
#define __DataStructure__binary_tree__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tnode {       /* the tree node: */
    char *word;          /* points to the text */
    int count;           /* number of occurrences */
    struct tnode *left;  /* left child */
    struct tnode *right; /* right child */
};

struct tnode *talloc(void);
struct tnode *add_tree(struct tnode *, char *);
void tree_print(struct tnode *);

#endif /* defined(__DataStructure__binary_tree__) */
