// Done using stack which takes time complexity of O(N) whereas basic idea takes O(N^2)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node {
  public :
    int data;
    Node *left,*right;
} node;

class Stack {
   public :
      int top,capacity;
      Node **array;
};

Stack *createstack(int capacity)
{
  Stack *stack = new Stack();
  stack->top = -1;
  stack->capacity = capacity;
  stack->array = new Node*[stack->capacity * sizeof(Node *)];
  return stack;
}

int isFull(Stack *stack)
{
	return stack->top == stack->capacity-1;
}

Node *peek(Stack *stack)
{
   return stack->array[stack->top];  	
}

int isEmpty(Stack *stack)
{
   return stack->top == -1;
}

Node *insert(int data)
{
  Node * temp = new Node();
  temp->data = data;
  temp->left = temp->right = NULL;
  return temp;
}

Node *pop(Stack *stack)
{
	if(isEmpty(stack))
	  return NULL;
	return stack->array[stack->top--];  
}

void push(Stack *stack,Node *item)
{
	if(isFull(stack))
	  return ;
	stack->array[++stack->top] = item;  
}

void inorder(Node *node)
{
  if(node == NULL)
    return ;
  inorder(node->left);
  cout << node->data << " ";
  inorder(node->right);
}
 

Node *constructbst(int pre[],int size)
{
  Stack * stack = createstack(size);
  Node *root = insert(pre[0]);
  push(stack,root);
  int i;
  Node *temp;
  for(i=1;i<size;i++)
  {
  	temp = NULL;
  	while(!isEmpty(stack) && pre[i] > peek(stack)->data)
  	  temp = pop(stack); 
  	if(temp!= NULL)
	  {
	   temp->right = insert(pre[i]);
	   push(stack,temp->right);	
	  }  
	 else
	 {
	  	peek(stack)->left = insert(pre[i]);
	  	push(stack,peek(stack)->left);
	 } 
  }
  return root;
}  

int main()
{
  int preorder[]  = {12,9,5,4,7,10,15,13,19,16};
  int size = sizeof(preorder)/sizeof(preorder[0]);
  Node *root = constructbst(preorder,size);
  inorder(root);
  return 0;
}
