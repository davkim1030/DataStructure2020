#ifndef LINKED_LIST_H
# define LINKED_LIST_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct node
{
	char data[4];
	listPointer link;
} listNode;
typedef listNode *listPointer;
#endif
