#include<iostream>
using namespace std;

#define MAX_Q_SIZE 500

class node {
	public :
		int data;
		node *left,*right;
}Node;

node* newNode(int data)  
{  
    node* Node = new node(); 
    Node->data = data;  
    Node->left = NULL;  
    Node->right = NULL;  
      
    return(Node);  
}  
/*
node** createQueue(int* front,int* rear)
{
	node** queue = new node*();
	*front = *rear = 0;
	return queue;
}

void enQueue(node** queue,int* rear,node* new_node)
{
	queue[*rear] = new_node;
	(*rear)++;
}

node* deQueue(node** queue,int* front)
{
	(*front)++;
	return queue[*front-1];
}

bool isQueueEmpty(int* front,int* rear)
{
	return (*rear == *front);
}
*/

int count(Node* root)
{
	if(!root) return 0;
	return count(root->left)+1+count(root->right);
}

bool isCompletedBTUtil(Node* root,int index,int count)
{
	if(!root) return true;
	if(index >= count)
	  return false;
	return isCompletedBTUtil(root->left,2*index+1,count) && 
	isCompletedBTUtil(root->right,2*index+2,count);  
}
bool isCompleteBT(Node* root)
{
   int index = 0;
   int c = count(root);
   return isCompletedBTUtil(root,index,c);	
}

int main()  
{  
     node *root = newNode(1);  
    root->left  = newNode(2);  
    root->right = newNode(3);  
    root->left->left = newNode(4);  
    root->left->right = newNode(5);  
    root->right->right = newNode(6);  
      
    if ( isCompleteBT(root) == true )  
        cout << "Complete Binary Tree";  
    else
        cout << "NOT Complete Binary Tree";  
      
    return 0;  
} 
