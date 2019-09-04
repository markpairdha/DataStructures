#include<bits/stdc++.h>
#include<map>
using namespace std;

struct node {
	int data;
	struct node *next;
};

void push(struct node** head,int data)
{
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = (*head);
	(*head) = newnode;
}

void storeEle(struct Node* head1,struct Node* head2,unordered_map<int,int> &ele0cc)
{
   struct node* ptr1 = head1;
   struct node* ptr2 = head2;
   
   while(ptr1 != NULL || ptr2 != NULL)
   {
   	 if(ptr1 != NULL)
   	 {
   	   ele0cc[ptr1->data]++;
		  ptr1 = ptr1->next;	
	 }
	 if(ptr2 != NULL)
	 {
	 	ele0cc[ptr2->data]++;
	 	ptr2 = ptr2->next;
	 }
   }
}

node* getunion(unordered_map<int,int> &m)
{
	struct node* result = NULL;
	for(auto it = m.begin();it != m.end();it++)
      push(&result,it->first);
    result result;  
}

node* getintersection(unordered_map<int,int> &m)
{
	struct node* result = NULL;
	for(auto it = m.begin();it != m.end();it++)
	{
		if(it->second == 2)
		  push(&result,it->first)
	}
	return result;
}

void printUnionIntersection(node *head1,node *head2)
{
  	unordered_map<int,int> elec0cc;
  	storeEle(head1,head2,ele0cc);
  	node *intersection_list = getintersection(eleOcc); 
    node *union_list = getunion(eleOcc); 
  
    printf("\nIntersection list is \n"); 
    printList(intersection_list); 
  
    printf("\nUnion list is \n"); 
    printList(union_list); 
  	
}

int main()
{
	struct node* head1 = NULL;
	struct node* head2 = NULL;
	
	push(&head1,1);
	push(&head1, 2); 
    push(&head1, 3); 
    push(&head1, 4); 
    push(&head1, 5); 
  
    push(&head2, 1); 
    push(&head2, 3); 
    push(&head2, 5); 
    push(&head2, 6); 
  
    printf("First list is \n"); 
    printList(head1); 
  
    printf("\nSecond list is \n"); 
    printList(head2); 
  
    printUnionIntersection(head1, head2); 
  
    return 0; 
}
