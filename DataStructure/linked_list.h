//
//  linked_list.h
//  DataStructure
//
//  Created by Takahiro on 2015/01/10.
//  Copyright (c) 2015 Takahiro Ishikawa. All rights reserved.
//

#ifndef __DataStructure__linked_list__
#define __DataStructure__linked_list__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nlist {
    char *word;
    int count;
    struct nlist *next;
};

struct nlist *cealloc(void);
struct nlist *add_list(struct nlist *, char *);
void list_print(struct nlist *);

#endif /* defined(__DataStructure__linked_list__) */
