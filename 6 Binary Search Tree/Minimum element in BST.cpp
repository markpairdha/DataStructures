
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Structure of the node of the binary search tree is as
struct Node 
{
	int data;
	Node* left;
	Node* right;
};
*/
// your task is to complete the below function
int minValue(Node* root)
{
    struct Node* current = root;
    while(current->left != NULL)
    {
        current = current->left;
    }
    return current->data;
}
