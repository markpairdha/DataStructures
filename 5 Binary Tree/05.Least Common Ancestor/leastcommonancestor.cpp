#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

class Node{
	public:
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

bool findpath(Node* root,vector<int> &path,int k)
{
   if(!root) return false;
   path.push_back(root->data);
   if(root->data == k) return true;
   if((root->left && findpath(root->left,path,k)) || (root->right && findpath(root->right,path,k)))
     return true;
   path.pop_back();
   return false;	 	
}

int findLCA(Node* root,int n1,int n2)
{
	vector<int> path1,path2;
	if(!findpath(root,path1,n1) || !findpath(root,path2,n2)) return -1;
	int i;
	for(i=0;i<path1.size() && i<path2.size();i++)
	  if(path1[i] != path2[i]) 
	    break;
	return path1[i-1];		
}

int main()
{
	Node* root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    root->right->left = newNode(6); 
    root->right->right = newNode(7); 
    cout << "LCA(4, 5) = " << findLCA(root, 4, 5); 
    cout << "nLCA(4, 6) = " << findLCA(root, 4, 6); 
    cout << "nLCA(3, 4) = " << findLCA(root, 3, 4); 
    cout << "nLCA(2, 4) = " << findLCA(root, 2, 4); 
    return 0; 
}
