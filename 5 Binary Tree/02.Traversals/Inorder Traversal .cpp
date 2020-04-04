using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};


/* Computes the number of nodes in a tree. */
void inOrder(struct Node* root);

/* Driver program to test size function*/
int main()
{
  int t;
  scanf("%d\n", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d\n",&n);
     Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = new Node(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];

        Node *child = new Node(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }

     inOrder(root);
     cout << endl;
  }
  return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */
void inOrder(Node* root)
{ 
    /*if(root)
    {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }*/
    
    stack<Node *> s;
    Node* curr = root;
    while(curr != NULL || s.empty() == false)
    {
        while(curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        
        curr = s.top();
        cout << curr->data << " ";
        s.pop();
        curr = curr->right;
    }
}



using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};


/* Computes the number of nodes in a tree. */
void inOrder(struct Node* root);

/* Driver program to test size function*/
int main()
{
  int t;
  scanf("%d\n", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d\n",&n);
     Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = new Node(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];

        Node *child = new Node(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }

     inOrder(root);
     cout << endl;
  }
  return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */
void inOrder(Node* root)
{ 
    /*if(root)
    {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }*/
    
    stack<Node *> s;
    Node* curr = root;
    while(curr != NULL || s.empty() == false)
    {
        while(curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        
        curr = s.top();
        cout << curr->data << " ";
        s.pop();
        curr = curr->right;
    }
}
