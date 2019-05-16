#include<bits/stdc++.h>
using namespace std;

struct node {
	int data;
	struct node *left,*right;
};

struct node* newnode(int data)
{
	struct node* node = (struct node *)malloc(sizeof(struct node));
	node->data = data;
	node->left = node->right = NULL;
	return node;
}
struct node* insert(struct node *node,int data)
{
	if(node == NULL)
	   return(newnode(data));
	else
	{
	  if(data <= node->data)
	    node->left = insert(node->left,data);
      else
	    node->right = insert(node->right,data);
	  return node;				
	}   
}

int minvalue(struct node *node)
{
	struct node *current = node;
	while(current->left != NULL)
	{
		current = current->left;
	}
	return current->data;
}
int main()
{
	struct node * node = NULL;
	node = insert(node,12);
	insert(node,13);
	insert(node,11);
	insert(node,14);
	insert(node,15);
	cout << minvalue(node);
}
