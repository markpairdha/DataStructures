// recursive
int freq=0;
int count(struct node* head, int no)
{
    if(head == NULL)
       return freq;
    if(head->data == no)
       freq++;
    return count(head->next,no);
}

// iterative
int count(struct node* head, int no)
{
    
    int freq;
    if(head == NULL)
       return ;
    struct node *curr = head;
    while(curr != NULL)
    {
        if(curr->data == no)
          freq++;
          curr = curr->next;  
    }
    return freq;
}
