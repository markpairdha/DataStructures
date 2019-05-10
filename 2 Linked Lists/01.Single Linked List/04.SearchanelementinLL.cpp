#include<bits/stdc++.h>
using namespace std;

class Node {
	public :
		int data;
	    Node *next;
};

bool searchiterative(Node **head,int data)
{
	Node *curr = *head;
	while(curr != NULL)
	{
		if(curr->data == data)
		   return true;
		else
		   curr = curr->next;   
	}
	return false;
}

bool searchrecursive(Node *head,int data)
{
	if(head->data == data)
	   return true;
	else
	   return searchrecursive(head->next,data);  
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
    int x = 21; 
    push(&head, 10); 
    push(&head, 30); 
    push(&head, 11); 
    push(&head, 21); 
    push(&head, 14);
	searchiterative(&head,11) ? printf("Yes") : printf("No");
	searchrecursive(head,21) ? printf("Yes") : printf("No");
	return 0; 
}
