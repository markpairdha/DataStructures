#include<iostream>
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

int count(Node* root)
{
	if(!root) return 0;
	return count(root->left)+1+count(root->right);
}
/*
bool checkUtil(Node* root,int n)
{
	if(!root) return false;
	if(count(root) == n-count(root))
	  return true;
	return checkUtil(root->left,n) || checkUtil(root->right,n);  
}
bool check(Node* root)
{
	int n = count(root);
	return checkUtil(root,n);
}
*/

int checkRec(Node* root,int n,bool res)
{
  if(!root) return 0;
  int c = 	checkRec(root->left,n,res)+1+checkRec(root->right,n,res);
  if(c==n-c)
   res = true;
  return c; 
}

bool check(Node* root)
{
	int n = count(root);
	bool res = false;
	checkRec(root,n,res);
	return res;
}
int main() 
{ 
    Node* root = newNode(5); 
    root->left = newNode(1); 
    root->right = newNode(6); 
    root->left->left = newNode(3); 
    root->right->left = newNode(7); 
    root->right->right = newNode(4); 
  
    check(root)?  printf("YES") : printf("NO"); 
  
    return 0; 
} 
