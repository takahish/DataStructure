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

struct cell {
    char *word;
    int count;
    struct cell *next;
};

struct cell *cealloc(void);
struct cell *add_list(struct cell *, char *);
void list_print(struct cell *);

#endif /* defined(__DataStructure__linked_list__) */
