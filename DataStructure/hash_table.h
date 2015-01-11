//
//  hash_table.h
//  DataStructure
//
//  Created by Takahiro on 2015/01/11.
//  Copyright (c) 2015 Takahiro Ishikawa. All rights reserved.
//

#ifndef __DataStructure__hash_table__
#define __DataStructure__hash_table__

#include "linked_list.h"

#define HASHSIZE 101

static struct nlist *hashtab[HASHSIZE];

unsigned hash(char *s);
void add_hash(char *w);
void hash_print(void);

#endif /* defined(__DataStructure__hash_table__) */
