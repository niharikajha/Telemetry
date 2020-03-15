#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef unsigned int uint;
typedef struct node
{
	uint data;
	struct node * Left;
	struct node * Right;
}Node;

Node * Create (void)
{
	Node * P;
	uint x;
	printf("Enter data (0) for no data");
	scanf ("%d", &x);
	if (x == 0)
	{
		return NULL;
	}
	else
	{
		P = (Node *)malloc(sizeof(Node));
		P->data = x;
		printf("Enter left child for %d", P->data);
		P->Left = Create();
		printf("Enter right child for %d", P->data);
		P->Right = Create();
	}
	return(P);
}
 void PreOrder(Node *T)
 {
 	if (T != NULL)
 	{
 		printf("%d-\t", T->data);
		PreOrder(T->Left);
		PreOrder (T->Right);	
	} 	
 }
 void InOrder(Node *T)
 {
 	if (T != NULL)
 	{
 		InOrder(T->Left);
 		printf("%d-\t", T->data);		
		InOrder (T->Right);	
	}  	
 }
void PostOrder(Node *T)
 {
 	if (T != NULL)
 	{
 		PostOrder(T->Left);
 		PostOrder (T->Right);	
 		printf("%d-\t", T->data);		
	}
 }
 
 int main (void)
 {
 	Node * Root;
 	Root = Create();
 	printf(" The preorder traversal of this tree is :\n");
 	PreOrder(Root);
 	printf(" The inorder traversal of this tree is :\n");
 	InOrder(Root);
 	printf(" The PostOrder traversal of this tree is :\n");
 	PostOrder(Root);
 	return(0);
 }
