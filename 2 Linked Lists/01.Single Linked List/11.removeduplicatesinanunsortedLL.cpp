//without recursion using two pointers

Node *removeDuplicates(Node *head)
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
	return head;
}


// using hashing
void removeduplicates(struct Node *head)
{
   unordered_set<int> hash;
   struct Node *curr = start,*old = NULL;
   while(curr != NULL)
   {
       if(hash.find(curr->data) != hash.end)
       {
          prev->next = curr->next;
          free(curr);
       }
       else
       {
          hash.insert(curr->data);
          prev = curr;  
       }
   }
}
