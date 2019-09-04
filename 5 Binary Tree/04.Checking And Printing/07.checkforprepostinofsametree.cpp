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
	temp->left = temp->right =NULL;
	return temp;
}

int search(int in[],int low,int high,int key)
{
	for(int i=low;i<=high;i++)
	{
	  if(in[i] == key)
	    return i;
	}
}

Node* buildTree(int in[],int pre[],int low,int high)
{
	static int index = 0;
	if(low>high) return NULL;
	Node* temp = newNode(pre[index++]);
	if(low == high) return temp;
	int Index = search(in,low,high,temp->data);
	temp->left = buildTree(in,pre,low,Index-1);
	temp->right = buildTree(in,pre,Index+1,high);
}

int checkPostorder(Node* root,int pos[],int index)
{
   if(!root) return index;
   index = checkPostorder(root->left,pos,index);
   index = checkPostorder(root->right,pos,index);
   if(root->data == pos[index])
      index++;
   else
     return -1;
   return index;	 	  	
}

int main() 
{ 
    int inOrder[] = {4, 2, 5, 1, 3}; 
    int preOrder[] = {1, 2, 4, 5, 3}; 
    int postOrder[] = {4, 5, 2, 3, 1}; 
  
    int len = sizeof(inOrder)/sizeof(inOrder[0]); 
  
    // build tree from given  
    // Inorder and Preorder traversals 
    Node *root = buildTree(inOrder, preOrder, 0, len - 1); 
  
    // compare postorder traversal on constructed 
    // tree with given Postorder traversal 
    int index = checkPostorder(root,postOrder,0); 
  
    // If both postorder traversals are same  
    if (index == len) 
        cout << "Yes"; 
    else
        cout << "No"; 
  
    return 0; 
}
