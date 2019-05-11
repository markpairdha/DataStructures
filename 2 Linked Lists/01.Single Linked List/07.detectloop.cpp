// flloyd 2pointers method
int detectloop(Node* list) 
{ 
    Node *slow_p = list, *fast_p = list; 
  
    while (slow_p && fast_p && fast_p->next) { 
        slow_p = slow_p->next; 
        fast_p = fast_p->next->next; 
        if (slow_p == fast_p) { 
            cout << "Found Loop"; 
            return 1; 
        } 
    } 
    return 0; 
} 

// using hashing
int detectloop(Node *h)
{
  unordered_set<Node*>s;
  while(h != NULL)
  {
    if(s.find() != s.end())
       return true;
    s.insert();
    h = h->next;
  }
  return false;
}
