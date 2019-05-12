Node *removeDuplicates(Node *root)
{
  if(root == nullptr)
    return nullptr;
  if(root->next == nullptr)
    return root;
  if(root->data == root->next->data)
  {
      Node *link = root->next;
      root->next = root->next->next;
      free(link);
      return removeDuplicates(root);
  }
  else
  {
     root->next = removeDuplicates(root->next);
     return root;
  }
  
}
