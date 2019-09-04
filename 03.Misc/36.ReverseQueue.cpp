#include<iostream>
#include<queue>
#include<stack>
using namespace std;


void reverseQueue(queue<int> &q)
{
	stack<int> s;
	while(!q.empty())
	{
		s.push(q.front());
		q.pop();
	}
	while(!s.empty())
	{
		q.push(s.top());
		s.pop();
	}
}

void Print(queue<int> &q)
{
   while(!q.empty())	
   {
   	 cout << q.front() << " ";
   	 q.pop();
   }
   cout << endl;
}

int main() 
{ 
    queue<int> Queue; 
    Queue.push(10); 
    Queue.push(20); 
    Queue.push(30); 
    Queue.push(40); 
    Queue.push(50); 
    Queue.push(60); 
    Queue.push(70); 
    Queue.push(80); 
    Queue.push(90); 
    Queue.push(100); 
  
    reverseQueue(Queue); 
    Print(Queue); 
} 
