#ifdef LINKEDLIST_H
#define LISTKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode
{
	ElementType Data;
	struct tagNode* NextNode;
}Node;


#endif // LINKEDLIST_H
