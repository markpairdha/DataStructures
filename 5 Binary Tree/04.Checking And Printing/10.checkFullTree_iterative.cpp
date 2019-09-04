#include <bits/stdc++.h> 
using namespace std; 
  
struct Node { 
    int data; 
    Node *left, *right; 
}; 
   
Node* getNode(int data) 
{
    Node* newNode = (Node*)malloc(sizeof(Node)); 
    newNode->data = data; 
    newNode->left = newNode->right = NULL; 
    return newNode; 
} 

bool isFullBinary(Node* root)
{
	queue<Node*> q;
	q.push(root);
	while(!q.empty())
	{
		Node* temp = q.front();
		q.pop();
		
		if(!temp->left && !temp->right) continue;
		if(!temp->left || !temp->right) return false;
		q.push(temp->left);
		q.push(temp->right);
	}
	return true;
}

int main() 
{ 
    Node* root = getNode(1); 
    root->left = getNode(2); 
    root->right = getNode(3); 
    root->left->left = getNode(4); 
    root->left->right = getNode(5); 
    if (isFullBinaryTree(root)) 
        cout << "Yes"; 
    else
        cout << "No"; 
    return 0; 
} 
