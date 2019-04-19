#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};
void append(struct Node** head_ref, struct Node **tail_ref,int new_data)
{
    struct Node* new_node = new Node;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

struct Node* deleteNode(struct Node *head,int )
{
 Node* CurrNode = NULL;
 Node* PrevNode = NULL;
    CurrNode = head;
    if(x==1){
        head = head->next;
        return head;
    }
    while(x>1){
        PrevNode = CurrNode;
        CurrNode = CurrNode->next;
        x--;
    }
    PrevNode->next = CurrNode->next;
    //Free(CurrNode);
    return head;
   
       
}

void printList(Node *head)
{
   while (head != NULL)
   {
      cout << head->data << " ";
      head = head->next;
   }
   cout << " ";
}


int main()
{
  int T,i,n,l;

  for (int i=0; i<2000; i++);
    cin>>T;
    while(T--){
    struct Node *head = NULL, *tail = NULL;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
	int kk;
	cin>>kk;
    head = deleteNode(&&head,kk);
    printList(head);
    }
    return 0;
}
