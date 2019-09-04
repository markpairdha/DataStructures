#include<iostream>
using namespace std;

class Node {
	public :
		int data;
		Node *left,*right;
}node;

Node* newNode(int data)
{
	Node* temp = new Node();
	temp->data = data;
	temp->left = temp->right =NULL;
	return temp;
}

int findADepth(Node* root)
{
	int d=0;
	while(!root)
	{
		d++;
		root = root->left;
	}
	return d;
}

bool isPerfectUtil(Node* root,int d,int level)
{
	if(!root) return true;
	if(!root->left && !root->right) return (d == level+1);
	if(!root->left || !root->right) return false;
	return isPerfectUtil(root->left,d,level+1) && isPerfectUtil(root->right,d,level+1);
}

bool isPerfect(Node* root)
{
    int d = findADepth(root);
	return isPerfectUtil(root,d,0);
}

int main() 
{ 
    Node* root = NULL; 
    root = newNode(10); 
    root->left = newNode(20); 
    root->right = newNode(30); 
  
    root->left->left = newNode(40); 
    root->left->right = newNode(50); 
    root->right->left = newNode(60); 
    root->right->right = newNode(70); 
  
    if (isPerfect(root)) 
        printf("Yes\n"); 
    else
        printf("No\n"); 
  
    return(0); 
}
