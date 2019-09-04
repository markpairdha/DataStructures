#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	struct Node *next;
};

void print(Node *head)
{
	while(head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << "  ";
}

void addatbeg(Node **head,int data)
{
   Node *temp = new Node();
   temp->data = data;
   temp->next = *head;
   *head = temp;  
}

void addafter(Node **head,int pos,int data)
{
	int i;
	Node *temp = new Node();
	temp = *head;
	for(i=0;i<pos;i++)
	{
      temp = temp->next;
	  if(temp == NULL)
	  {
	  	printf("There are less than %d elements in LL.\n",i);
	  	return ;
      }
	}
	Node *temp1 = new Node();
	temp1->data = data;
	temp1->next = temp->next;
	temp->next = temp1;
}

void addatend(Node **head,int data)
{
  if(*head == NULL)
  {
  	Node *temp = new Node();
    temp->data = data;
	temp->next = NULL;
	*head = temp;	
  }	
  else
  {
  	Node *temp = *head;
  	while(temp->next != NULL)
  	  temp = temp->next;
  	Node *temp1 = new Node();  
  	temp1->data = data;
	temp1->next = NULL;
	temp->next = temp1;    
  }
}

int main()
{
	Node *head = NULL;
	addatbeg(&head,3);
	addatbeg(&head,2);
	addatbeg(&head,1);
	print(head);
	//addafter(&head,3,4);
	addafter(&head,2,6);
	addafter(&head,1,7);
	print(head);
	addatend(&head,10);
	addatend(&head,11);
	addatend(&head,12);
	addatend(&head,13);
	print(head);
}

/*

// function inserts the data in front of the list
void insertAtBegining(struct node** head, int data)
{
    // Code here
   node *temp = new node();
   temp->data = data;
   temp->next = *head;
   *head = temp;
}
// function appends the data at the end of the list
void insertAtEnd(struct node** head, int data)
{
    // Code here
      if(*head == NULL)
  {
  	node *temp = new node();
    temp->data = data;
	temp->next = NULL;
	*head = temp;	
  }	
  else
  {
  	node *temp = *head;
  	while(temp->next != NULL)
  	  temp = temp->next;
  	node *temp1 = new node();  
  	temp1->data = data;
	temp1->next = NULL;
	temp->next = temp1;    
  }
}*/
