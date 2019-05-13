#include<bits/stdc++.h>
#include<inttypes.h>

using namespace std;

class Node {
	public :
		int data;
		Node *npx;
};
Node *XOR(Node *a,Node *b)
{
	return (Node *) ((uintptr_t)(a) ^ (uintptr_t)(b));
}

void insert(Node **head,int data)
{
	Node *new_node = new Node();
	new_node->data = data;
	new_node->npx = XOR(*head,NULL);
	if(*head != NULL)
	{
		Node *next = XOR((*head)->npx,NULL);
		(*head)->npx = XOR(new_node,next);
	}
	*head = new_node;
}

void printList (struct Node *head)
{
	Node *curr=head;
	Node *prev=NULL;
	Node *next;
	while(curr){
	    cout<<curr->data<<" ";
	    next=XOR(prev,curr->npx);
	    prev=curr;
	    curr=next;
	}
	cout<<"\n";
	curr=prev;
	prev=NULL;
	while(curr){
	    cout<<curr->data<<" ";
	    next=XOR(prev,curr->npx);
	    prev=curr;
	    curr=next;
	}
}


int main()
{
	Node *head = NULL;
	insert(&head,10);
	insert(&head,20);
	insert(&head,30);
	insert(&head,40);
	printList(head);
	return 0;
}
