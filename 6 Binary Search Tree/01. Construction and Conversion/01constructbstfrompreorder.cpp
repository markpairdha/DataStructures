#include <bits/stdc++.h>
#include <iostream>

class node {
	public :
		int data;
		node *left,*right;
};

void inorder(node *node)
{
	if(node == NULL)
	  return ;
    inorder(node->left);
	cout << node->data << " ";
	inorder(node->right);	  
}

node *newnode(int data)
{
	node *temp = new node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}
node *constructTreeUtil(int pre[],int *preIndex,int low,int high,int size)
{
	if(*preIndex >= size || low > high)
	  return NULL;
	  
	node *root = newnode(pre[*preIndex]);
	*preIndex = *preIndex + 1;
	if(low == high)
	 return root;
	int i;
	for(i=low,i<=high;i++)
	  if(pre[i] > root->data)
	     break;
	root->left = constructTreeUtil(pre,preIndex,*preIndex,i-1,size);
	root->right = constructTreeUtil(pre,preIndex,i,high,size);	  
	return root;
}

node *constructTree(int pre[],int size)
{
   int preIndex = 0;
   return constructTreeUtil(pre,&preIndex,0,size-1,size);
}

int main()
{
  int pre[] = {10,5,1,7,40,50};
  int size = sizeof(pre)/sizeof(pre[0]);
  node *root = constructTree(pre,size);
  inorder(pre,size);	
}
