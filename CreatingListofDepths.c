/* Given a binary tree , design an algorithm
which creates a linked list of all nodes */
/* Breadth first search*/
/*linked List at all depths*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct node 
{
	int data;
	struct node * left;
	struct node * right;
	struct node * nextright;
}Node;
void ConnectRecur(Node *P);
void Connect(Node *P) //Root Case
{
	P->nextright =NULL;
	ConnectRecur(P);
}
void ConnectRecur(Node *P)
{
	if (!P)
	{
		return;
	}
	if(P->left)
	{
		P->left->nextright = P->right;
	}
	if(P->right)
	{
		P->right->nextright = (P->nextright)?P->nextright->left:NULL;
	}
	ConnectRecur(P->left);
	ConnectRecur(P->right);
}
//UTILITY function
Node * newnode (int data)
{
	Node * N ;
	N = (Node *)malloc(sizeof(Node));
	N->left = NULL;
	N->right = NULL;
	N->nextright = NULL;
	return (N);
}

int main (void)
{
	Node * Root;
	Root = newnode(10);
	Root->left = newnode(8);
	Root->right = newnode(2);
	Root->left->left = newnode(3);
	Connect(Root);
	printf("If next right is null we will print -1");
	printf ("the next right of %d is %d \n", Root->data,(Root->nextright)?Root->nextright->data: -1);
	printf ("the next right of %d is %d \n", Root->left->data,(Root->left->nextright)?Root->left->nextright->data: -1);	
	printf ("the next right of %d is %d \n", Root->right->data,(Root->right->nextright)?Root->right->nextright->data: -1);
	printf ("the next right of %d is %d \n", Root->left->left->data,(Root->left->left->nextright)?Root->left->left->nextright->data: -1);		
	
}
