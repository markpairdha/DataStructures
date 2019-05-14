#include<bits/stdc++.h>
using namespace std;

//costify enqueue
struct Queue {
	stack<int> s1,s2;
	
	void enQueue(int data)
	{
		while(!s1.empty())
		{
			s2.push(s1.top());
			s1.pop();
		}
	   s1.push(data);
	   while(!s2.empty())
	   {
	        s1.push(s2.top());
			s2.pop();	
	   }	
	}
	int deQueue()
	{
		if(s1.empty())
			return -1;
	    int top = s1.top();
	    s1.pop();
	    return top;
	}
	
};
// costify dequeue
struct Queue1 {
	stack<int> s1,s2;
	void enqueue(int data)
	{
		s1.push(data);
	}
	int dequeue()
	{
		while(!s1.empty())
		{
			s2.push(s1.top());
			s1.pop();
		}
		return s2.top();
		s2.pop();
		while(!s2.empty())
		{
			s1.push(s2.top());
			s2.pop();
		}
	}
};

// using recursion one stack only 
struct Queue2 {
	stack<int> s1;
	void enqueue(int data)
	{
		s1.push(data);
	}
	
	int dequeue()
	{
		x = s1.top();
		s1.pop();
		if(s1.empty())
		 return x;
	    int item = dequeue();
		s1.push(x);
		return item; 	 
	}
};
int main()
{
   Queue q;
   q.enQueue(12);
   q.enQueue(13);
   cout << q.deQueue();
   //show(q);
}
