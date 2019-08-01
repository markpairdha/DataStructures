#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *left,*right,*random;
};

Node* newNode(int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->left = temp->random = temp->right = NULL;
	return temp;
}

void printInorder(Node* tree)
{
	printInorder(tree->left);
	cout << "[" << tree->data ;
	if(tree->random == NULL)
	  cout << "NULL]";
	else
	  cout << tree->random->data << "]";
	printInorder(tree->right);    
}

Node* CloneLeftRight(Node* tree,map<Node*,Node*> &mp)
{
   	if(tree == NULL)
   	    return ;
   	Node* clone = newNode(tree->data);
	mp[tree] = clone;
	clone->left = CloneLeftRight(tree->left,mp);
	clone->right = CloneLeftRight(tree->right,mp);
}

Node* CopyRandom(Node* tree,Node* newTree,map<Node*,Node*> &mp)
{
	if(tree == NULL)
	   return;
	newTree->random = mp[tree->random];
	CopyRandom(tree->left,newTree->left,mp);
	CopyRandom(tree->right,newTree->right,mp);  
}

Node* cloneTree(Node* tree)
{
  	if(tree == NULL)
  	  return NULL;
  	map<Node*,Node*> mp;
	Node* newTree = CloneLeftRight(tree,mp);
	CopyRandom(tree,newTree,mp);
	return newTree;   
}

int main()
{
	Node* tree = newNode(1);
	tree->left = newNode(2); 
    tree->right = newNode(3); 
    tree->left->left = newNode(4); 
    tree->left->right = newNode(5); 
    tree->random = tree->left->right; 
    tree->left->left->random = tree; 
    tree->left->right->random = tree->right;
    
    cout << "Inorder traversal.\n";
    printInorder(tree);
    
    Node* clone = cloneTree(tree);
    
    cout << "Clone Inorder traversal.\n";
    printInorder(clone);
    
    return 0;
}
