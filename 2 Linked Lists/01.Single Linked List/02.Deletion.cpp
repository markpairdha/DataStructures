#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

struct node {
	int data;
	struct node *next;
}Node;

void print(struct node *head)
{
	while(head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << " ";
}

void del(struct node **head,int data)
{
  struct node *old,*temp = *head;
  while(temp != NULL) 
  {
  	if(temp->data == data)
  	{
  	  if(temp == *head)
		 *head = temp->next;
	  else
	     old->next = temp->next;
	  free(temp);
	  return;	 	 	
	}
	else
	{
		old = temp;
		temp = temp->next;
	}
  }
  printf("Element %d not found\n",data);
}

void push(struct node **head,int data)
{
	if(*head == NULL)
	{
		node *temp = new node();
		temp->data = data;
		temp->next = NULL;
		*head = temp;
	}
	else
	{
	struct node *temp1 = *head;
	while(temp1->next != NULL)
	  temp1 = temp1->next;
	node *temp = new node();
	temp->data = data;
	temp->next = NULL;
	temp1->next = temp;
    }
}

int main()
{
	struct node *head = NULL;
	push(&head,99);
	print(head);
	push(&head,20);
	print(head);
	push(&head,21);
	print(head);
	del(&head,21);
	print(head);
	return 0;
}
