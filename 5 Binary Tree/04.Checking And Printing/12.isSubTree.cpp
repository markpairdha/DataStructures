#include<cstring>
#include<iostream>

using namespace std;
#define MAX 100

class Node {
	public :
		char key;
		Node *left,*right;
};

Node* newNode(char key)
{
	Node* temp = new Node();
	temp->left = temp->right = NULL;
	temp->key = key;
	return temp;
}

void storeInorder(Node* root,char arr[],int &i)
{
	if(!root) 
	{
	  arr[i++] = '$';
	  return ;
    }
    arr[i++] = root->key;
    storeInorder(root->left,arr,i);
    storeInorder(root->right,arr,i);
}
bool isSubtree(Node* T,Node* S)
{
	if(!S) return true;
	if(!T) return false;
	int m=0,n=0;
	char inT[MAX],inS[MAX];
	storeInorder(T,inT,m);
	storeInorder(S,inS,n);
	inT[m] = '\0',inS[n] = '\0';
	m=0,n=0;
	
}

int main()
{
	Node* T = newNode('a');
	T->left = newNode('b'); 
    T->right = newNode('d'); 
    T->left->left = newNode('c'); 
    T->right->right = newNode('e'); 
  
    Node* S = newNode('a'); 
    S->left = newNode('b'); 
    S->left->left = newNode('c'); 
    S->right = newNode('d'); 
  
    if (isSubtree(T, S)) 
        cout << "Yes: S is a subtree of T"; 
    else
        cout << "No: S is NOT a subtree of T"; 
  
    return 0; 
}
