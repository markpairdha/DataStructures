#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node {
	public :
		char data;
		Node *left,*right;
}node;

Node* newnode(int data)
{
	Node* temp = new Node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

void inorder(Node* root)
{
	while(!root)
	{
		inorder(root->left);
		cout << root->data << " ";
		inorder(root->right);
	}
}

int search(char in[],int low,int high,char data)
{
	int i;
	for(i=low;i<=high;i++)
	{
		if(in[i] == data)
		  return i;
	}
}
Node* constructtree(char in[],char pre[],int low,int high)
{
   static int index = 0;
    if(low > high) return NULL;
   Node* temp = newnode(pre[index++]);
   if(in == pre) return temp;
   int index = search(in,low,high,temp->data);
   temp->left = constructtree(in,pre,low,index-1);
   temp->right = constructtree(in,pre,index,high);
    	
}

int main()
{
	char in[] = {'D','B','E','A','F','C'};
	char pre[] = {'A','B','D','E','C','F'};
	
	int len = sizeof(in)/sizeof(in[0]);
	Node* root = constructtree(in,pre,0,len-1);
	inorder(root);
}
