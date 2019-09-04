#include<iostream>
#include<bits/stdc++.h>
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
	temp->left = temp->right = NULL;
	return temp;
}

Node* findLCA(Node* root,int n1,int n2)
{
	if(!root || root->data == n1 || root->data == n2) return root;
	Node* left = LCA(root->left,n1,n2);
	Node* right = LCA(root->right,n1,n2);
	if(left && right) return root;
	return (left != NULL) ? left : right;
}

int findLevel(Node* root,int k,int level)
{
	if(!root) return -1;
	if(root->data == k) return level;
	int left = findLevel(root->left,k,level+1);
	if(left ==  -1) return findLevel(root->right,k,level+1);
	return left;
}
int findDistance(Node* root,int n1,int n2)
{
	Node* lca = findLCA(root,n1,n2);
    int d1 = findLevel(lca,a,0);
	int d2 = findLevel(lca,b,0);	
	return d1+d2;	
}

int main()
{
Node * root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    root->right->left = newNode(6); 
    root->right->right = newNode(7); 
    root->right->left->right = newNode(8); 
    cout << "Dist(4, 5) = " << findDistance(root, 4, 5); 
    cout << "nDist(4, 6) = " << findDistance(root, 4, 6); 
    cout << "nDist(3, 4) = " << findDistance(root, 3, 4); 
    cout << "nDist(2, 4) = " << findDistance(root, 2, 4); 
    cout << "nDist(8, 5) = " << findDistance(root, 8, 5); 
    return 0; 	
}
