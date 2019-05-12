#include<bits/stdc++.h>
#include<string>
using namespace std;

struct Node {
	string data;
	struct Node *next;
};

int check(string str)
{
	int i=0,len = str.length();
	for(i=0;i<len/2;i++)
	{
		if(str[i] != str[len-1-i])
		return false;
	}
	return true;
}
int ispalindrome(struct Node *head)
{
   	string str = " ";
   	while(head != NULL)
   	{
   	 str.append(head->data);  
   	 head = head->next;
    }
    return check(str);
}
void push(struct Node **head,char data)
{
   	struct Node *new_node;
   	new_node->data = data;
   	new_node->next = (*head);
   	(*head) = new_node;
}

int main()
{
	struct Node *head = NULL;
	char str[] = "abcdcba";
	int i;
	for(i=0;str[i] != '\0';i++)
		push(&head,str[i]);
    cout << ispalindrome(head);
	return 0;	
}

Node* rev(Node *head) {
    Node *pre=NULL;
    Node *curr = NULL;
    
    while(head != NULL) {
        curr = new Node(head->data);
        curr->next = pre;
        pre=curr;
        head=head->next;
    }
    return curr;
}
bool isPalindrome(Node *head)
{
    if(head==NULL) {
        return true;
    }
    
    Node *rhead = rev(head);
    while(head != NULL) {
        if(head->data != rhead->data) {
            break;
        }
        head=head->next;
        rhead=rhead->next;
    }
    return head == NULL;
}
