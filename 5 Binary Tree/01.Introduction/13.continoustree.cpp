#include<bits/stdc++.h>
using namespace std;

struct node {
int data;
struct node *left,*right;
};

node* newnode(int data)
{
   struct node* temp = new node;
   temp->data = data;
   temp->left = temp->right = NULL;
   return temp;
}

bool treeContinous(node* root)
{
   if(root == NULL)
      return true;
   if(root->left == NULL)
      return ((abs((root->data)-(root->right->data)) == 1) && (treContinous(root->right))); 
   
   if(root->right == NULL)
      return ((abs((root->data)-(root->left->data)) == 1) && (treeContinous(root->left)));
   if(root->left == NULL && root->right == NULL)
      return true;
   return abs(root->data - root->left->data) && abs(root->data - root->right->data) && treeContinous(root->left) && treeContinous(root->right) ;   
}

int main() 
{ 
    struct Node *root = newNode(3); 
    root->left        = newNode(2); 
    root->right       = newNode(4); 
    root->left->left  = newNode(1); 
    root->left->right = newNode(3); 
    root->right->right = newNode(5); 
    treeContinuous(root)?  cout << "Yes" : cout << "No"; 
    return 0; 
} 
