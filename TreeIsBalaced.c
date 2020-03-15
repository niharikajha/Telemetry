#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX(a,b) (a>b)?a:b
typedef unsigned int uint;
typedef struct node {
	uint data;
	struct node * left, *right;	
}Node;
int isBSTUtil (Node *head, int min, int max);
uint height(Node * head)
{
	if (head == NULL)
	{
		return 0;
	}
	else
	{
		return(1 + MAX(height(head->left),height(head->right)));
	}
}

uint IsBalanced (Node * head)
{
	Node * leftchild ;
	Node * rightchild;
	uint lh, rh;
	leftchild = head->left;
	rightchild = head->right;
	lh = height(leftchild);
	rh = height(rightchild);
	if (((lh - rh)<= 1)
	||((rh - lh)<= 1)&& (IsBalanced(leftchild))&&(IsBalanced(rightchild)))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int IsBST(Node * head)
{
	return(isBSTUtil, INT_MIN, INT_MAX);
}

int isBSTUtil (Node *head, int min, int max)
{
	if(head == NULL)
	{
		return 0;
	}
	if ((head->data < INT_MIN)||(head->data > INT_MAX ))
	{
		return 0;
	}
	if ((isBSTUtil(head->left,min,(head->data)-1))&&(isBSTUtil(head->right, (head->data)+1, max)))
	{
		return 1;
	}
}
//UTILITY

Node * newnode ( int data)
{
	Node * N ;
	N = (Node *)malloc(sizeof(Node));
	N->left = NULL;
	N->right = NULL;
	return (N);
}

int main (void)
{
	Node * Root ;
	Root = newnode(1);
	Root->left = newnode(2); 
    Root->right = newnode(3); 
    Root->left->left = newnode(4); 
    Root->left->right = newnode(5); 
    Root->right->left = newnode(6); 
    
   Root->right->right = newnode(8);
   Root->left->left->left = newnode(7);
   Root->left->left->right = newnode(9);
   Root->right->right->left = newnode(10);
   Root->right->right->right = newnode(11);
	if(IsBalanced(Root))
	{
		printf(" Is Balanced");
	}
	else
	{
		printf("Not Balanced");
		} 
	if(IsBST(Root))
	{
		printf(" Is BST");
	}
	else
	{
		printf("Not BST");
		} 	
		return 0;   
	 
}
