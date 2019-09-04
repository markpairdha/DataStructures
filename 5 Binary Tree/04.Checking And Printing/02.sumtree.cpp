#include<iostream>
using namespace std;

class Node {
	public :
		int data;
		Node *right,*left;
}node;

Node* newNode(int data)
{
  Node* temp = new Node();
  temp->data = data;
  temp->left = temp->right = NULL;
  return temp;	
}

int sum(Node* root)
{
	if(!root)
	  return 0;
	return sum(root->left)+root->data + sum(root->right);  
}

int isSumTree(Node* root)
{
   	int ls,rs;
   	if(!root || (!root->left && !root->right)) return 1;
   	ls = sum(root->left);
   	rs = sum(root->right);
   	if(root->data == (ls+rs) && isSumTree(root->left) && isSumTree(root->right))
   	  return 1;
   	return 0;  
}

int main()
{
    Node *root  = newNode(26); 
    root->left         = newNode(10); 
    root->right        = newNode(3); 
    root->left->left   = newNode(4); 
    root->left->right  = newNode(6); 
    root->right->right = newNode(3); 
    if(isSumTree(root)) 
        printf("The given tree is a SumTree "); 
    else
        printf("The given tree is not a SumTree "); 
  
    getchar(); 
    return 0; 	
}
