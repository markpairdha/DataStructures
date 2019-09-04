#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *right,*left;
}node;

Node* newNode(int data)
{
	Node* temp = new Node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

int sum(Node* root)
{
	if(!root) return 0;
	return sumT(root->left)+sumT(root->right)+root->data;
}

int uncoversumLeft(Node* root)
{
	if(root->left && root->right) return root->data;
	if(root->left) return root->data+uncoversumLeft(root->left);
	if(root->right) return root->data+uncoversumRight(root->right);
}

int uncoversumRight(Node* root)
{
   if(root->left && root->right) return root->data;
   if(root->left) return root->data+uncoversumRight(root->left);
   if(root->right) return root->data+uncoversumRight(root->right);	
}

int uncoversum(Node* root)
{
	int lb=0,rb=0;
	if(root->left) lb = uncoversumLeft(root->left);
	if(root->right) rb = uncoversumRight(root->right);
	return root->data+lb+rb;
}
bool isSumSame(Node* root)
{
	int sumUC = uncoversum(root);
	int sumT = sum(root);
	return (sumUC == (sumT-sumUC));
}

int main()
{
    Node* root = newNode(8); 
    root->left = newNode(3); 
  
    root->left->left = newNode(1); 
    root->left->right = newNode(6); 
    root->left->right->left = newNode(4); 
    root->left->right->right = newNode(7); 
  
    root->right = newNode(10); 
    root->right->right = newNode(14); 
    root->right->right->left = newNode(13); 
  
    if (isSumSame(root)) 
        printf("Sum of covered and uncovered is same\n"); 
    else
        printf("Sum of covered and uncovered is not same\n"); 	
}
