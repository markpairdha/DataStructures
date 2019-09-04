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

int isSumProperty(Node* root)
{
	if(root == NULL || (root->left == NULL && root->right == NULL))
	  return 1;
	else
	{  
	int left_data = 0,right_data = 0;
	if(root->left != NULL) left_data = root->left->data;
	if(root->right != NULL) right_data = root->right->data;
	if((root->data == (left_data+right_data)) && isSumProperty(root->left) && isSumProperty(root->right))
	  return 1;
	else  
      return 0;  
    }
}

int main() 
{ 
    Node* root = newNode(10); 
    root->left     = newNode(8); 
    root->right = newNode(2); 
    root->left->left = newNode(3); 
    root->left->right = newNode(5); 
    root->right->right = newNode(2); 
    if(isSumProperty(root)) 
        cout << "The given tree satisfies "
            << "the children sum property "; 
    else
        cout << "The given tree does not satisfy "
            << "the children sum property "; 
  
    getchar(); 
    return 0; 
} 
