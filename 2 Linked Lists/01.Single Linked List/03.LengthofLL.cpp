#include<bits/stdc++.h>
using namespace std;

class Node{
	public :
		int data;
		Node *next;
};


void push(Node **head,int data)
{
	Node *newnode = new Node();
	newnode->data = data;
	newnode->next = (*head);
	*head = new_node;
}

int getCount(Node *head)
{
  if(head == NULL)
     return 0;
  return 1+	getCount(head->next); 	
}

int main()
{
	Node *head = NULL;
	push(&head, 1); 
    push(&head, 3); 
    push(&head, 1); 
    push(&head, 2); 
    push(&head, 1);
    printf("count of nodes is %d",getCount(head));
    return 0;
}
