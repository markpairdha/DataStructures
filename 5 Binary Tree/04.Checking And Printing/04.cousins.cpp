#include<iostream>
using namespace std;

class Node {
	public :
		int data;
		Node* right,*left;
}node;

Node* newNode(int data)
{
	Node* temp = new Node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}
int level(Node* root,Node* a,int lev)
{
	if(!root)  return 0;
	if(root == a) return lev;
	int l = level(root->left,a,lev+1);
	if(l!=0) return l;
	return level(root->right,a,lev+1);
}

int isSibling(Node* root,Node* a,Node* b)
{
   if(!root) return 0;
   if(root->left && root->right)
   return ((root->left==a && root->right==b) || 
       (root->right==a && root->left==b) ||
	   isSibling(root->left,a,b) || isSibling(root->right,a,b));
	   	
}

int isCousin(Node* root,Node* a,Node* b)
{
	if(level(root,a,1) == level(root,b,1) && !(isSibling(root,a,b)))
	  return 1;
	else return 0;  
}

int main() 
{ 
    Node *root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    root->left->right->right = newNode(15); 
    root->right->left = newNode(6); 
    root->right->right = newNode(7); 
    root->right->left->right = newNode(8); 
  
    Node *Node1,*Node2; 
    Node1 = root->left->left; 
    Node2 = root->right->right; 
  
    isCousin(root,Node1,Node2)? puts("Yes"): puts("No"); 
  
    return 0; 
} 


