#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node {
	public:
		int data;
		Node* left,*right;
}node;


Node* findLCA(Node* root,int n1,int n2)
{
	if(!root) return NULL;
	if(root->data == n1 || root->data == n2) return root;
	Node* left = findLCA(root->left,n1,n2);
	Node* right = findLCA(root->right,n1,n2);
	if(left && right) return root;
	return (left != NULL)? left : right;
}

bool printAncestors1(Node* root,int target)
{
	if(!root) return false;
	if(root->data == target)
	  cout << root->data << " ";
	  return true;
	if(printAncestors(root->left,target) || printAncestors(root->right,target))
	  cout << root->data << " ";
	  return true;
	return false;    
}
bool printAncestors(Node* root,int target)
{
	if(!root) return false;
	if(root->data == target) 
	  cout << root->data << " ";
	  return true;
	if(printAncestors(root->left,target) || printAncestors(root->right,target))
	  cout << root->data << " ";
	   return true;
	return false;     
}

bool findCommonNodes(Node* root,int n1,int n2)
{
	Node* lca = findLCA(root,n1,n2);
	if(!lca) return false;
	printAncestors(root,lca->data);
}
int main()
{
	// Let us create binary tree given in the above 
    // example 
    Node* root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    root->right->left = newNode(6); 
    root->right->right = newNode(7); 
    root->left->left->left = newNode(8); 
    root->right->left->left = newNode(9); 
    root->right->left->right = newNode(10); 
  
    if (findCommonNodes(root, 9, 7) == false) 
        cout << "No Common nodes"; 
  
    return 0; 
}
