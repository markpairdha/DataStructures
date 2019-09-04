#include<bits/stdc++.h>
#include<string>
using namespace std;

struct Node {
	int data;
	struct Node *next;
};

Node *removeduplicates(Node *head)
{
	Node *outer = head,*inner = NULL,*hold;
	while(outer != NULL && outer->next != NULL)
	{
		inner = outer;
		while(inner->next != NULL)
		{
			if(outer->data == inner->next->data)
			{
				hold = inner->next;
				inner->next = inner->next->next;
				free(hold);
			}
			else
			 inner = inner->next;
		}
		outer = outer->next;
	}
}

void push(struct Node **head,int data)
{
   	struct Node *new_node;
   	new_node->data = data;
   	new_node->next = (*head);
   	(*head) = new_node;
}

int main()
{
	struct Node *head = NULL;
    Node *node = removeduplicates(head);
    print(node);
	return 0;	
}
