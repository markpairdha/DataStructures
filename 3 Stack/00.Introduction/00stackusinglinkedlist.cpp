#include <iostream>
using namespace std;

class StackNode {
	public :
		int data;
		StackNode *next;
};

int isEmpty(StackNode *root)
{
	return !root;
}
void push(StackNode **root,int data)
{
	StackNode *temp = new StackNode();
	temp->data = data;
	temp->next = *root;
	*root = temp;
	cout << data << "pushed to stack.\n";
}

int pop(StackNode **root)
{
  if(isEmpty(*root))
     return INT_MIN;
  StackNode *temp = *root;
  *root = (*root)->next;
  int popped = temp->data;
  free(temp);	 	
}

int peek(StackNode *root)
{
	if(isEmpty(root))
	  return INT_MIN;
	return root->data;
}

int main()
{
	StackNode *root = NULL;
	push(&root,10);
	push(&root,20);
	push(&root,30);
	cout <<pop(&root) << "popped from stack.\n";
	cout << "Top element is "<<peek(root) << endl;
	return 0;
}
