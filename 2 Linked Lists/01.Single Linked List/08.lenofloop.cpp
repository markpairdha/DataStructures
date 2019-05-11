int countnodes(struct Node *one)
{
    int count = 1;
    struct Node *temp = one;
    while(temp->next != one)
    {
        count++;
        temp = temp->next;
    }return count;
}
int countNodesinLoop(struct Node *head)
{
    Node *one = head,*two = head;
    while(one && two && two->next)
    {
        one = one->next;
        two = two->next->next;
        if(one == two)
          return countnodes(one);
    }
}
