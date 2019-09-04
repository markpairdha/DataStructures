#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node {
	public:
		int data;
	Node *left,*right;
}node;

Node* newNode(int data)
{
	Node* temp = new Node();
	temp->left = temp->right =NULL;
	return temp;
}

void inorder(Node* root)
{
	while(!root)
	{
		inorder(root->left);
		cout << root->data << " ";
		inorder(root->right);
	}
}

int maxDiffUtil(Node* root,int* res)
{
  if(!root) return INT_MAX;
  if(!root->left && !root->right) return root->data;
  int val = min(maxDiffUtil(root->left,res),maxDiffUtil(root->right,res));
  *res = max(*res,root->data-val);
  return min(val,root->data);	
}

int maxDiff(Node* root)
{
	int res = INT_MIN;
	maxDiffUtil(root,&res);
	return res;
}
int main()
{
	 Node* root; 
    root = newNode(8); 
    root->left = newNode(3); 
  
    root->left->left = newNode(1); 
    root->left->right = newNode(6); 
    root->left->right->left = newNode(4); 
    root->left->right->right = newNode(7); 
  
    root->right = newNode(10); 
    root->right->right = newNode(14); 
    root->right->right->left = newNode(13); 
  
    printf("Maximum difference between a node and"
           " its ancestor is : %d\n", maxDiff(root)); 
}
