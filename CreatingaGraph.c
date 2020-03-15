/* Graph Building */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define N 6
typedef unsigned int uint;
typedef struct node{
	int dest;
	struct node * next;
}Node;
typedef struct graph{
	Node * head[N];
}Graph;
typedef struct Edge{
	int src;
	int dest;
}Edge;
Graph * CreateGraph(Edge * Edges, int n)
{
	int src,dest;
	Graph * G;
	Node * newnode;
	G = (Graph *)malloc(sizeof(Graph));
	newnode = (Node *)malloc(sizeof(Node));
	int i;
	for (i =0; i<N; i++)
	{
		G->head[i] = NULL;
	}
	for (i = 0; i<n ; i++)
	{
		src= Edges[i].src;
		dest = Edges[i].dest;
		newnode->dest = dest;
		newnode->next = G->head[src];
		G->head[src] = newnode;
	}
	return G;
}
void printGraph(Graph *G)
{
	int i;

	for (i = 0; i<N; i++)
	{
		Node * ptr = G->head[i];
		while (ptr != NULL)
		{	
			
			printf("%d ->Data -> %d \t", i,ptr->dest);
			ptr = ptr->next;
		}
	}
}
int main (void)
{
	Edge Edges[7] = {
		{0,1},{1,2},{2,0}, {2,1},
		{3,2},{4,5},{5,4}
	};
	Graph * G;
	G= CreateGraph(&Edges[0],7);
	printGraph(G);
	return 0;
}
