#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node {
	public :
		int data;
		Node *left,*right;
}node;

Node* newnode(int data)
{
	Node* temp = new Node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

class Stack {
	public :
		int size;
		int top;
		Node** array;
}stack;

Stack* createstack(int size)
{
	Stack* stack = new Stack();
	stack->size = size;
	stack->top = -1;
	stack->array = (Node*)malloc(stack->size*sizeof(Node*));
	return stack;
}

int isFull(Stack* stack)
{
	return stack->top-1 == stack->size;
}

int isEmpty(Stack* stack)
{
	return stack->top == -1;
}

void push(Stack* stack,Node* node)
{
	if(isFull(stack)) return;
	stack->array[++stack->top] = node;
}

Node* pop(Stack* stack)
{
	if(isEmpty(stack)) return NULL;
	return stack->array[stack->top--];
}

Node* peek(Stack* stack)
{
	if(isEmpty(stack)) return NULL;
	return stack->array[stack->top];
}

void postOrderIterative(Node* root)
{
	if(!root) return;
	Stack* stack = createstack(50);
	do
	{
		while(root)
		{
			if(root->right)
			  push(stack,root->right);
			push(stack,root);
			root = root->left;  
		}
		
		root = pop(stack);
		if(root->right && peek(stack) == root->right)
		{
			pop(stack);
			push(stack,root);
			root = root->right;
		}
		else
		{
			cout << root->data << " ";
			root = NULL;
		}
	}while(!isEmpty(stack));
}

int main()
{
     Node* root = NULL; 
    root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    root->right->left = newNode(6); 
    root->right->right = newNode(7); 
    printf("Post order traversal of binary tree is :\n"); 
    printf("["); 
    postOrderIterative(root); 
    printf("]"); 
      
  
    return 0; 	
}
