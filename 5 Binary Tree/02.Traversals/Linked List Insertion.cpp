
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Structure of the linked list node is as
struct node
{
    int data;
    struct node *next;
};
*/
// function inserts the data in front of the list
void insertAtBegining(struct node** head, int data)
{
    // Code here
   node *temp = new node();
   temp->data = data;
   temp->next = *head;
   *head = temp;
}
// function appends the data at the end of the list
void insertAtEnd(struct node** head, int data)
{
    // Code here
      if(*head == NULL)
  {
  	node *temp = new node();
    temp->data = data;
	temp->next = NULL;
	*head = temp;	
  }	
  else
  {
  	node *temp = *head;
  	while(temp->next != NULL)
  	  temp = temp->next;
  	node *temp1 = new node();  
  	temp1->data = data;
	temp1->next = NULL;
	temp->next = temp1;    
  }
}
