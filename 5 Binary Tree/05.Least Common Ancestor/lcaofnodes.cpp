#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;

class Node {
	public :
		int data;
		Node *left,*right,*parent;
};

Node* newNode(int data)
{
	Node* temp = new Node();
	temp->data = data;
	temp->left = temp->parent = temp->right = NULL;
	return temp;
}

Node* insert(Node* node,int data)
{
	if(!node) return newNode(data);
	if(data < node->data)
	{
		node->left = insert(node->left,data);
		node->left->parent = node;
	}
	else if(data > node->data)
	{
		node->right = insert(node->right,data);
		node->right->parent = node;
	}
	return node;
}

Node* LCA(Node* n1,Node* n2)
{
	map<Node*,bool> ancestors;
	while(n1 != NULL)
	{
		ancestors[n1] = true;
		n1 = n1->parent;
	}
	while(n2 != NULL)
	{
		if(ancestors.find(n2) != ancestors.end())
		  return n2;
		n2 = n2->parent;  
	}
	return NULL;
}

int main()
{
 Node * root = NULL; 
  
    root = insert(root, 20); 
    root = insert(root, 8); 
    root = insert(root, 22); 
    root = insert(root, 4); 
    root = insert(root, 12); 
    root = insert(root, 10); 
    root = insert(root, 14); 
  
    Node *n1 = root->left->right->left; 
    Node *n2 = root->left; 
    Node *lca = LCA(n1, n2); 
  
    printf("LCA of %d and %d is %d \n", n1->key, n2->key, lca->key); 
  
    return 0;	
}
