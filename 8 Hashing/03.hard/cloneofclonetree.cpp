#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

class Node {
	public :
		int data;
		Node *left,*right,*random;
};

Node* newNode(int data)
{
	Node* temp = new Node();
	temp->data = data;
	temp->left = temp->random = temp->right = NULL;
	return temp;
}

void inorder(Node* root)
{
	if(!root) return;
	inorder(root->left);
	cout <<"[" root->data << " ";
	if(!root->random) cout << "]";
	else cout << root->random->data << "]";
	inorder(root->right);
}

Node* copyLeftRight(Node* root,unordered_map<Node*,Node*>&mp)
{
	if(!root) return NULL;
   Node* clone = newNode(root->data);
   mp[root] = clone;
   clone->left = copyLeftRight(root->left,mp);
   clone->right = copyLeftRight(root->right,mp);
   return clone;	
}

void copyRandom(Node* root,Node* clone,unordered_map<Node*,Node*>&mp)
{
  if(!clone) return NULL;
  clone->random = mp[root->random];
  copyRandom(root->left,clone->left,mp);
  copyRandom(root->right,clone->right,mp);	
}

Node* cloneTree(Node* root)
{
	unordered_map<Node*,Node*> mp;
	Node* clone = copyLeftRight(root,mp);
	copyRandom(root,clone,mp);
	return clone;
}

int main()
{
	Node *tree = newNode(1); 
    tree->left = newNode(2); 
    tree->right = newNode(3); 
    tree->left->left = newNode(4); 
    tree->left->right = newNode(5); 
    tree->random = tree->left->right; 
    tree->left->left->random = tree; 
    tree->left->right->random = tree->right; 
  
    cout << "Inorder traversal of original binary tree is: \n"; 
    inorder(tree); 
  
    Node *clone = cloneTree(tree); 
  
    cout << "\n\nInorder traversal of cloned binary tree is: \n"; 
    inorder(clone); 
    return 0; 
}

