#include<iostream>
#include<bits/stdc++.h>
//#include<unordered_map>
using namespace std;
class Node {
	public :
		int data;
		Node *next;
}node;

void push(Node** root,int data)
{
	Node* temp = new Node();
	temp->data = data;
	temp->next = (*root);
	(*root) = temp;
}

void printList(Node* head)
{
	if(!head) return;
	while(!head)
	{
		cout << head->data << " ";
		head = head->next;
	}
}

void mergelist(Node* head1,Node* head2,map<int,int> &mp)
{
	while(!head1)
	{
		mp[head1->data]++;
		head1 = head1->next;
	}
	while(!head2)
	{
		mp[head2->data]++;
		head2 = head2->next;
	}
}

Node* getunionlist(map<int,int> &mp)
{
	Node* temp = NULL;
	map<int,int> ::iterator it;
	for(it = mp.begin();it != mp.end();it++)
       push(&temp,it->first);
    return temp;   
}

Node* getintersectionlist(map<int,int> &mp)
{
	Node* temp = NULL;
	map<int,int> ::iterator it;
	for(it = mp.begin();it != mp.end();it++)
	{
		if(it->second == 2)
		  push(&temp,it->first);
	}
	return temp;
}
void printUnionIntersection(Node* head1,Node* head2)
{
   map<int,int> mp;
   mergelist(head1,head2,mp);
   Node* unionlist = getunionlist(mp);
   Node* intersectionlist = getintersectionlist(mp);
}

int main()
{
	 Node* head1 = NULL; 
    Node* head2 = NULL; 
  
    /* create a linked list 11->10->15->4->20 */
    push(&head1, 1); 
    push(&head1, 2); 
    push(&head1, 3); 
    push(&head1, 4); 
    push(&head1, 5); 
  
    /* create a linked list 8->4->2->10 */
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
