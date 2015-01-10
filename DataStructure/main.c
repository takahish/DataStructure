//
//  main.c
//  DataStructure
//
//  Created by Takahiro on 2015/01/10.
//  Copyright (c) 2015 Takahiro Ishikawa. All rights reserved.
//
//  Reference "C Programming Language (2nd Edition)", Brian Kernighan and Dennis Ritchie.
//

#include <ctype.h>
#include <stdio.h>
#include "binary_tree.h"
#include "linked_list.h"

#define MAXWORD 100

int get_word(char *, int);

int main(int argc, const char * argv[]) {
    //struct tnode *root;
    struct cell *lst;
    char word[MAXWORD];

    //root = NULL;
    lst = NULL;
    while (get_word(word, MAXWORD) != EOF)
        if (isalpha(word[0]))
            //root = add_tree(root, word);
            lst = add_list(lst, word);
    //tree_print(root);
    list_print(lst);
    return 0;
}

/* get_word: get next word or character from input */
int get_word(char *word, int lim)
{
    int c;
    char *w = word;

    while (isspace(c =getchar()))
        ;
    if (c != EOF)
        *w++ = c;
    if (!isalpha(c)) {
        *w = '\0';
        return c;
    }
    for ( ; --lim > 0; w++)
        if (!isalnum(*w = getchar()))
            break;
    *w = '\0';
    return word[0];
}
