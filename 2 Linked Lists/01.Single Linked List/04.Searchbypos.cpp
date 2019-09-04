#include<bits/stdc++.h>
using namespace std;

class Node {
	public :
		int data;
	    Node *next;
};

int searchatpos(Node *head,int pos)
{
	if(pos == 1)
	  return head->data;
    return searchatpos(head->next,pos-1);	
}

void push(Node **head,int data)
{
	Node *new_node = new Node;
	new_node->data = data;
	new_node->next = (*head);
	(*head) = new_node;
}
int main()
{
	Node *head = NULL; 
    push(&head, 10); 
    push(&head, 30); 
    push(&head, 11); 
    push(&head, 21); 
    push(&head, 14);
	cout << searchatpos(head,4);
}
