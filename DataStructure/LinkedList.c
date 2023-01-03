#include "LinkedList.h"

Node* SLL_CreateNode(ElementType NewData)
{
	*Node NewNode = (*Node)malloc(sizeof(Node));

	NewNode->Data = NewData;
	NewNode->NextNode = NULL;

	return NewNode;
}

void SLL_DestroyNode(Node* Node)
{
	free(Node);
}

void SLL_AppendNode(Node** Head, Node* NewNode)
{

}

