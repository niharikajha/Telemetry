#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node * nextptr;
};
void reverse(struct Node** head)
{
	struct Node *current,*next,*prev;
	current = *head;
	while (current !=NULL)
	{
		next = current->nextptr;
		current->nextptr = prev;
		prev = current;
		current = next;
	}
	*head = prev;
}
void push_tolist(struct Node** head, int data)
{
	struct Node *new_node;
	new_node = (struct Node *)malloc(sizeof(struct Node *));
	new_node->data = data;
	new_node->nextptr = *head;
	*head = new_node;
}
void printList(struct Node* head)
{
	struct Node *temp;
	temp = head;
	while (temp != NULL)
	{
		printf("%d", temp->data);
		temp = temp->nextptr;
	}
}
int main(void)
{
	struct Node *head;
	head = NULL;
	push_tolist(&head, 20);
	push_tolist(&head, 30);
	push_tolist(&head, 40);
	push_tolist(&head, 50);
	push_tolist(&head, 60);
	printList(head);
	reverse(&head);
	printList(head);
	return (0);
}
