#include<bits/stdc++.h>
using namespace std;

class Node {
	public : 
	int data;
	Node *next;
};

int nfromend(Node *head,int n)
{
    Node *one = head,*two = head;
    int count=0;
	while(count<n)
	  one = one->next;
	while(one!=NULL)
	  one = one->next;
	  two = two->next;
	  return two->data;        
}
void push(Node **head,int data)
{
	Node *new_node,*curr = *head;
	new_node->data = data;
	new_node->next = (*head);
    (*head) = new_node;
}
int main()
{
	Node *head = NULL;
	push(&head,11);
    push(&head,12);
    push(&head,13);
    push(&head,14);
    push(&head,15);
   cout << nfromend(head,3);
    return 0;
}
