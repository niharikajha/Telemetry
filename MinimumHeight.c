/* Given an array of sorted unique integers
Write an Algorithm to make a binary search tree 
With Minimal Height */
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
Node * CreateBST(uint *array , uint start , uint end);
Node * CreateMinBST (uint *array);
Node * CreateBST(uint *array , uint start , uint end)
{
	printf("I entered here with %d as start %d as end", start, end);
	if (end > start)
	{
		return NULL;
	}
	uint mid = (start + end)/2;
	Node * Root = (Node *)malloc(sizeof(Node));
	Root->data = array[mid];
	Root->Left = CreateBST(&array[0],start,mid -1);
	Root->Right = CreateBST(&array[0],mid+1,end);
	return(Root);
}

Node * CreateMinBST (uint *array)
{
	return(CreateBST(&array[0],0,8));
}
void InOrder(Node *T)
 {
 	if (T != NULL)
 	{
 		InOrder(T->Left);
 		printf("%d \t", T->data);		
		InOrder (T->Right);	
	}  	
 }

int main (void)
{
	uint array[9] = {10,20,30,40,55,68,90,100,150};
	Node * Root ;
	Root = CreateMinBST(&array[0]);
	InOrder(Root);
	return(0);
}

